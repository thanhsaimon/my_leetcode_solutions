// runtime : 152ms
// memory : 154.08mb
class DSU {
public:
    vector<int> parent, rank;
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) parent[i] = i;
    }
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }
    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return;

        if (rank[a] < rank[b]) swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b]) rank[a]++;
    }
};
class Solution {
public:
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        int n = source.size();
        DSU dsu(n);
        for (auto &e : allowedSwaps) {
            dsu.unite(e[0], e[1]);
        }
        unordered_map<int, vector<int>> groups;
        for (int i = 0; i < n; i++) {
            groups[dsu.find(i)].push_back(i);
        }
        int res = 0;
        for(auto &g : groups) {
            unordered_map<int, int> cnt;
            for (int idx : g.second) {
                cnt[source[idx]]++;
            }
            for (int idx : g.second) {
                if (cnt[target[idx]] > 0) {
                    cnt[target[idx]]--;
                } else {
                    res++;
                }
            }
        }
        return res;
    }
};

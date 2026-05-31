// 31/5/2026
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long cur = mass;
        for (int x : asteroids) {
            if (cur < x) return false;
            cur += x;
        }
        return true;
    }
};

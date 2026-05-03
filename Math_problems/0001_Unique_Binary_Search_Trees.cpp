// 19/4/2026
// solution : catalan number
// runtime: 0ms
// memory : 7.66mb
class Solution {
public:
    int numTrees(int n) {
        long long res = 1;
        for (int i = 0 ; i < n ; i++){
            res = res * 2 * (2 * i + 1) / ( i + 2);
        }
        return res;
    }
};

// 16/4/2026
// runtime : 0ms
// memory : 7.88mb
// (0,0) -> (m-1 , n - 1):
// (m-1) = down
// (n - 1) = right
// sum = ( m - 1) + (n - 1) = m + n - 2 
// C (m + n - 2 , m - 1) = (m + n - 2) ! / (m - 1)! * (n-1)! :)
using ll = long long ;
class Solution {
public:
    int uniquePaths(int m, int n) {
        ll res = 1;
        int k = min(m - 1, n - 1);

        for (int i = 1; i <= k; i++) {
            res = res * (m + n - 2 - k + i) / i;
        }

        return (int)res;
    }
};

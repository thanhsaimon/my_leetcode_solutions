// 4/5/2026
// runtime : 0ms
// memory : 8.06mb
class Solution {
public:
    int trailingZeroes(int n) {
        int cnt = 0;
        while (n > 0) {
            n /= 5;
            cnt += n;
        }
        return cnt;
    }
};

// 2 /5/2026
// runtime : 0ms
// memory: 7.66mb
class Solution {
public:
    int rotatedDigits(int n) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (check(i)) {
                cnt++;
            }
        }
        return cnt;
    }

private:
    bool check(int n) {
        bool has_changed = false;
        while (n > 0) {
            int tmp = n % 10;
            if (tmp == 3 || tmp == 4 || tmp == 7) {
                return false;
            }
            if (tmp == 2 || tmp == 5 || tmp == 6 || tmp == 9) {
                has_changed = true;
            }
            n /= 10;
        }
        return has_changed;
    }
};

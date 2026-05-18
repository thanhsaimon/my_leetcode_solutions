// 19/4/2026
// runtime :0ms
// memory : 11.86mb
class Solution {
public:
    Solution() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
    }
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1 ; i >= 0 ; i--){
            if (digits[i] < 9){
                digits[i]++;
                return digits;
            }
            else {
                digits[i] = 0;
            }
        }
        // 99 , 999,.....
        digits.insert(digits.begin(), 1);
        return digits;
    }   
};

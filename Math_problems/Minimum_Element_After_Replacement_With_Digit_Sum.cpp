// 29/5/2026
class Solution {
public:
    int digit_sum (int n){
        int sum = 0;
        while ( n > 0){
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int res = INT_MAX;
        for (int x : nums){
            int temp = digit_sum(x);
            if (temp < res){
                res = temp;
            }
        }
        return res;
    }   
};

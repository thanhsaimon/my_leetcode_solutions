// runtime : oms
// memoryy : 99.8mb
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long sum = 0;
        long long F = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            F += 1LL * i * nums[i];
        }
        long long res = F;
        for (int k = 1; k < n; k++) {
            F = F + sum - 1LL * n * nums[n - k];
            res = max(res, F);
        }
        
        return (int)res;
    }
};

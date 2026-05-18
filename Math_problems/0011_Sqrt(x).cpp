// runtime : 0ms
// memory : 8.51mb
class Solution {
public:
    int mySqrt(int x) {
        long long left = 0;
        long long right = x ;
        long long res = 0;
        while (left <= right){
            long long mid = (left + right) / 2;
            if (mid * mid <= x){
                res = mid;
                left = mid + 1;
            }
            else {
                right = mid -1;
            }
        }
         return res;
    }
};

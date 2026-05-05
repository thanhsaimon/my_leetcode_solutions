// runtime : 0 ms
// memory : 8.57mb
class Solution {
public:
    bool isPalindrome(int n){
        if ( n < 0 ) return false;
        long long reversenum = 0;
        long long firstnum = n;
        long long tmp = n;
        while (tmp > 0){
            int ld = tmp % 10;
            reversenum = reversenum * 10 + ld;
            tmp /= 10;
        }
        return reversenum == firstnum;
    }
};

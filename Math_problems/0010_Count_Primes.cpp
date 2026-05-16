// 16/5/2026
// runtime : 163ms
// memory : 12.71mb
class Solution {
public:
    int countPrimes(int n) {
        if ( n <= 2) return 0;
        vector <bool> is_prime(n,true);
        is_prime[0] = is_prime[1] = false;
        for (int i = 2 ; i * i < n  ; i++){
            if (is_prime[i]){
                for (int j = i * i ; j < n ; j +=i){
                    is_prime[j] = false;
                }
            }
        }
        int cnt = 0;
        for (int i = 2 ; i < n ; i++){
            if (is_prime[i]) cnt++;
        }
        return cnt;
    }

};

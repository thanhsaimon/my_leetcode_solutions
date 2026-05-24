// runtime : 0ms
// memory : 7.9mb
// 5342 -> n = 4 -> len - 2 = 2 
// 4 > 2 && 3 < 4 -> i (index 3) = 3
class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int len = s.size();
         
        int i = len - 2; 
        while ( i >= 0 &&  s[i] >= s[i+1]){
            i--; 
        }
        if (i < 0) return - 1; // n1 < n2 -> false;
        int j = len - 1;
        while (s[j] <= s[i]){
            j--;
        }
        swap (s[i], s[j]);
        reverse(s.begin() + i + 1 , s.end());
        long long res = stoll(s);
        if ( res > INT_MAX) return -1;
        return (int)res;
    }   
};

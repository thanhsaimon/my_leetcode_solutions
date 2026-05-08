// runtime : 2ms
// memory : 9.23mb
class Solution {
public:
    int expand(string& s , int l , int r ){
        while (l >= 0 && r < s.size() && s[l] == s[r]){
            l--;
            r++;
        }
        return r - l - 1;
    }
    string longestPalindrome(string s) {
        int start = 0;
        int maxlen = 0;
        for (int i = 0 ; i < s.size() ; i++){
            int len1 = expand(s , i , i);// lẻ
            int len2 = expand(s,i ,i+1); // chẵn
            int len = max(len1,len2);
            if (len > maxlen){
                maxlen = len;
                start = i - (len - 1) / 2;
            }
        }
        return s.substr(start, maxlen);
    }
};

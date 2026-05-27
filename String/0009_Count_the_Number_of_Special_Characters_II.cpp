// 27/5/2026
// runtime:205ms
// memory : 25.58mb
class Solution {
public:
        int last_lower(char c , const string& word){
            int pos = -1;
            for (int i = 0 ; i < word.size() ; i++){
                if (word[i] == c) pos = i;
            }
            return pos;
        }
        int first_upper (char c , const string& word){
            char upper = c - 'a' + 'A';
            for (int i = 0 ; i < word.size() ; i++){
                    if (word[i] == upper) return i;
            }   
            return -1;
        }
    int numberOfSpecialChars(string word) {
        int cnt = 0;
        set <char> s(word.begin(),word.end());
        for (char c = 'a' ; c <= 'z' ; c++){
            if (s.count(c) 
            && s.count (c - 'a' + 'A') 
            && last_lower(c,word) < first_upper(c,word)){
                cnt  += 1;
            }
         }
         return cnt;
    }
};

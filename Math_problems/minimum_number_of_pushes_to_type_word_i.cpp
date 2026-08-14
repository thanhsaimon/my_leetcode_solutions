class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int ines_res = 0;
        for (int i = 0 ; i < n ; i++){
            int push = i / 8 + 1;
            ines_res += push;
        }
        return ines_res;
    }
};

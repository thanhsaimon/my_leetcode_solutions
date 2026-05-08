// runtime : 7ms
// memory : 11.96mb
/class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> cnt;
        int l = 0;
        int res = 0;
        for (int r = 0 ; r < s.size() ; r++){
            if (cnt.count(s[r])){
                l = max(l,cnt[s[r]]+1);
            }
            cnt[s[r]] = r;
            res = max(res, r - l + 1);
        }
    return res;
    }
};

// 16/4/2026
// runtime : 3ms
// memory : 15.64mb
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        //backtrack(res, current, open, close, n)
        backtrack(res, "", 0, 0, n);
        return res;
    }

    void backtrack(vector<string>& res, string current, int open, int close, int n) {
        if (current.size() == 2 * n) {
            res.push_back(current);
            return;
        }
        if (open < n) {
            backtrack(res, current + "(", open + 1, close, n);
        }
        if (close < open) {
            backtrack(res, current + ")", open, close + 1, n);
        }
    }
};

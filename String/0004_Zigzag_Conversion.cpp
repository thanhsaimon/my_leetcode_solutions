// runtime : 7ms
// memory : 14.00mb
class Solution {
public:
    string convert(string s, int numRows) {
        // theo quy luật thì khi nào chạm đỉnh hoặc đáy thì bắt đầu lên hoặc xuống (tùy)
        // |    /|    /|    /|
        // |  /  |  /  |  /  |
        // |/    |/    |/    |
        // / : up , | : down
        int n = s.size();
        if (numRows == 1 || s.size() <= numRows) return s;
        vector <string> rows(numRows);
        int curRow = 0;
        bool goingdown = true;
        for (int i = 0 ; i < s.size() ; i++){
            rows[curRow] += s[i];
            if (curRow == numRows - 1){
                goingdown = false;
            }
            else if (curRow == 0){
                goingdown = true;
            }
            if (goingdown == true){
                curRow  += 1;
            }
            else {
                curRow -= 1;
            }
        }
        string res = "";
        for (int i = 0 ; i < numRows ; i++){
            res += rows[i];
        }
        return res;
    }
};

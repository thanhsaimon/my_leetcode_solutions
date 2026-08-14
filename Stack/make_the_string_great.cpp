class Solution {
public:
    string makeGood(string s) {
        stack <char> st;
        for (char c : s ){
            if (!st.empty() && tolower(c) == tolower(st.top()) && c != st.top()){
                st.pop();
            }
            else {
                st.push(c);
            }
        }
        string ines_res = "";
        while (!st.empty()){
            ines_res += st.top();
            st.pop();
        }
        reverse(ines_res.begin() , ines_res.end());
        return ines_res;
    }
};

// 3 / 5 / 2026
// we can see : 
// abcde = [ab] + [cde]
// -> cde + ab = "cdeab"
// => s = x + y and goal = y + x
// s + s = abcdeabcde = x + (y + x) + x ( and y + x = goal) so
// =>  goal is a substring (s+s)
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        string doubled = s + s;
        return doubled.find(goal) != string::npos;
    }
};

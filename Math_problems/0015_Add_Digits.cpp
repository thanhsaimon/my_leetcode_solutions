// 27/5/2026
// without loop / recursion
// -> Digital Root
// runtime :0ms
// memory : 8.80mb
class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        return 1 + ((num - 1) % 9); 
    }
};

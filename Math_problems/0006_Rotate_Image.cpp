// 16/4/2026 
// runtime : 0ms
// memory : 10.27mb
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // đổi hàng thành cột (i,j)->(j,n−1−i)
        int n = matrix.size();
        for (int i = 0 ; i < n ; i++){
            for (int j = i + 1 ; j < n ; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
            for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

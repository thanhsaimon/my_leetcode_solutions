// 15/5/2026
// A (x1,y1) B (x2,y2)
// slope = (y2-y1)/ (x2-x1) = a
// C (x3,y3) D (x4 , y4)
// slope = (y4-y3) / (x4-x3) = a
// => points AB and CD are collinear
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if ( n <= 2) return n;
        int res  = 2;
        for (int i = 0 ; i < n ; i++){
            for (int j = i + 1 ; j < n ; j++){
                int cnt = 2;
                int x1 = points[i][0];
                int y1 = points[i][1];
                int x2 = points[j][0];
                int y2 = points[j][1];
                for (int k = 0 ; k < n ; k++){
                    if (k == i || k == j) continue;
                    int x3 = points[k][0];
                    int y3= points[k][1];
                    
                    if ((y2-y1) * (x3 -x1) == (y3 - y1) * (x2 - x1)){
                        cnt += 1;
                    }
                }
                res = max(res , cnt);
            }
        }
        return res;
    }
};

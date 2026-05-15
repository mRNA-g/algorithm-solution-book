class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int h = triangle.size();
        vector<vector<int>>f(h,vector<int>(h));
        f[0][0] = triangle[0][0];
        for(int i=1;i<h;i++){
            f[i][0] = f[i-1][0]+triangle[i][0];
            for(int j=1;j<i;j++){
                f[i][j] = min(f[i-1][j-1],f[i-1][j])+triangle[i][j];
            }
            f[i][i] = f[i-1][i-1]+triangle[i][i];
        }
        return *min_element(f[h-1].begin(),f[h-1].end());
    }
};

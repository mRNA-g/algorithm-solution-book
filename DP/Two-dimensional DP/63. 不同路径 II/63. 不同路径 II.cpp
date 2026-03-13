class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(),n=obstacleGrid[0].size();
        vector memo(m,vector<int>(n,-1));
        auto dfs = [&](this auto&& dfs,int i,int j) -> int{
            if(i<0||j<0||obstacleGrid[i][j]){
                return 0;
            }
            if(i==0&&j==0){
                return 1;
            }
            int& res = memo[i][j];
            if(res!=-1){
                return res;
            }
            return res = dfs(i-1,j)+dfs(i,j-1);
        };
        return dfs(m-1,n-1);
    }
};

class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        for(int k=1;k<m+n;k++){
            int min_j = max(n-k,0);
            int max_j = min(m+n-1-k,n-1);
            vector<int> a;
            for(int j=min_j;j<=max_j;j++){
                a.push_back(grid[k+j-n][j]);
            }
            if(min_j>0){
                ranges::sort(a);
            }else{
                ranges::sort(a,greater());
            }
            for(int j=min_j;j<=max_j;j++){
                grid[k+j-n][j] = a[j-min_j];
            }
        }
        return grid;
    }
};

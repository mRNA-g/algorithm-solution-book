class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        vector<int> sum(mat.size(),0),arr(mat[0].size(),0);
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                sum[i]+=mat[i][j];
                arr[j]+=mat[i][j];
            }
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if((mat[i][j])&&(sum[i]==1&&arr[j]==1)){
                    ans++;
                }
            }
        }
        return ans;
    }
};

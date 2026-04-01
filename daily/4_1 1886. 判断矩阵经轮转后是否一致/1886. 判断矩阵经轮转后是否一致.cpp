class Solution {
    void rotate(vector<vector<int>>& mat){
        int n = mat.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
            ranges::reverse(mat[i]); // ÐÐ·­×ª
        }
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++){
            if(mat==target)return true;
            rotate(mat);
        }
        return false;
    }
};

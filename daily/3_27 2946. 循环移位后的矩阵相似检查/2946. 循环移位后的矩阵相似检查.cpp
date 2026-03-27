class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int len = mat[0].size();
        for(auto& row:mat){
            for(int i=0;i<len;i++){
                if(row[i]!=row[(i+k)%len]){
                    return false;
                }
            }
        }
        return true;
    }
};

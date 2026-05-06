class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size(),n = boxGrid[0].size();
        vector ans(n,vector<char>(m));
        for(int i=0;i<m;i++){
            auto& row = boxGrid[i];
            int cnt = 0;
            for(int j=0;j<n;j++){
                char ch = row[j];
                if(ch == '#'){
                    cnt++;
                    ch = '.';
                }
                ans[j][m-1-i] = ch;
                if(j == n-1||row[j+1]=='*'){
                    for(int k = j;k>j-cnt;k--){
                        ans[k][m-1-i] = '#';
                    }
                    cnt=0;
                }
            }
        }
        return ans;
    }
};

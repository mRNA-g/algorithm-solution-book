class Solution {
    void dfs(vector<vector<int>>& isConnected,vector<int>&visited,int len,int v){
        for(int i=0;i<len;i++){
            if((!visited[i])&&(isConnected[v][i])){
                visited[i]=1;
                dfs(isConnected,visited,len,i);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int num = isConnected[0].size();
        int ans=0;
        vector<int> visited(num,0);
        for(int i=0;i<num;i++){
            if(!visited[i]){
                dfs(isConnected,visited,num,i);
                ans++;
            }
        }
        return ans;
    }
};

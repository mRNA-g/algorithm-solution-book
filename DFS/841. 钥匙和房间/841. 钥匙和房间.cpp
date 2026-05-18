class Solution {
    void dfs(vector<vector<int>>& rooms,vector<int>& visited,int v){
        for(int i:rooms[v]){
            if(!visited[i]){
                visited[i]=1;
                dfs(rooms,visited,i);
            }
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int num = rooms.size();
        vector<int> visited(num,0);
        dfs(rooms,visited,0);
        for(int i=1;i<num;i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }
};

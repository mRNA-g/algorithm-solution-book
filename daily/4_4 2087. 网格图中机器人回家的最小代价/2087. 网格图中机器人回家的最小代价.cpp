class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        int ans=0;
        if(startPos[1]<homePos[1]){
            for(int i=startPos[1];i<=homePos[1];i++){
                ans+=colCosts[i];
            }
        }else{
            for(int i=startPos[1];i>=homePos[1];i--){
                ans+=colCosts[i];
            }
        }
        if(startPos[0]<homePos[0]){
            for(int i=startPos[0];i<=homePos[0];i++){
                ans+=rowCosts[i];
            }
        }else{
            for(int i=startPos[0];i>=homePos[0];i--){
                ans+=rowCosts[i];
            }
        }
        int home = colCosts[startPos[1]]+rowCosts[startPos[0]];
        ans-=home;
        return ans;
    }
};

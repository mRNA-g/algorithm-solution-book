class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k=minutes;
        int ans=0,temp=0;
        for(int i=0;i<customers.size();i++){
            if(!grumpy[i])ans+=customers[i];
        }
        temp=ans;
        for(int i=0;i<customers.size();i++){
            if(grumpy[i])temp+=customers[i];
            if(i-k>=0){
                if(grumpy[i-k])temp-=customers[i-k];
            }
            ans=max(ans,temp);
        }
        return ans;
    }
};
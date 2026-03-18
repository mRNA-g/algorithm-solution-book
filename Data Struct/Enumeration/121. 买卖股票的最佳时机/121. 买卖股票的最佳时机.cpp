class Solution {
public:
    int maxProfit(vector<int>& prices) {
        unordered_map<int,int> mp;
        int t=10e4+1,ans=0;
        for(int i=0;i<prices.size();i++){
            t = min(t,prices[i]);
            mp[prices[i]] = prices[i]-t;
            ans = max(ans,mp[prices[i]]);
        }
        return ans<0?0:ans;
    }
};

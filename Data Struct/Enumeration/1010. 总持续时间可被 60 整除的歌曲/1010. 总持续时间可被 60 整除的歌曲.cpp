class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int cnt[60]={};int ans=0;
        for(auto t : time){
            int i = 60-t%60;
            ans+=cnt[i%60];
            cnt[t%60]++;
        }
        return ans;
    }
};

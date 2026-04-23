class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int>sum(len+1);
        for(int i=0;i<len;i++){
            sum[i+1] = sum[i]+nums[i];
        }
        int ans=0;
        unordered_map<int,int>mp;
        for(int s:sum){
            ans+=mp.contains(s-k)?mp[s-k]:0;
            mp[s]++;
        }
        return ans;
    }
};

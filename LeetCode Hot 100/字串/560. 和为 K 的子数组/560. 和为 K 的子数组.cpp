class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int len = nums.size();
        vector<long long>prefixed(len+1,0);
        for(int i=1;i<=len;i++){
            prefixed[i]+=prefixed[i-1]+nums[i-1];
        }
        int ans=0;
        unordered_map<long long,int>mp;
        mp[0]++;
        for(int i=1;i<=len;i++){
            if(mp.contains(prefixed[i]-k)){
                ans+=mp[prefixed[i]-k];
            }
            mp[prefixed[i]]++;
        }
        return ans;
    }
};

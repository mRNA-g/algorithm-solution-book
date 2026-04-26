class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int len = nums.size();
        vector<long long>prefixed(len+1,0);
        for(int i=0;i<len;i++){
            prefixed[i+1] = prefixed[i]+nums[i];
        }
        vector<long long> min_s(k,LLONG_MAX/2);
        long long ans = LLONG_MIN;
        for(int j=0;j<len+1;j++){
            int i = j % k;
            ans = max(ans,prefixed[j]-min_s[i]);
            min_s[i] = min(min_s[i],prefixed[j]);
        }
        return ans;
    }
};

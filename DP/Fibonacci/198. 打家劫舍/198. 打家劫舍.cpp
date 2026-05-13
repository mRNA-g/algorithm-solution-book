class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len==0){
            return 0;
        }else if(len==1){
            return nums[0];
        }else if(len==2){
            return max(nums[0],nums[1]);
        }
        vector<int>dp(len+1,0);
        dp[1] = nums[0];
        dp[2] = max(nums[0],nums[1]);
        for(int i=3;i<len+1;i++){
            dp[i] = max(dp[i-2]+nums[i-1],dp[i-1]);
        }
        return dp[len];
    }


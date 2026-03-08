class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0,left=0,cnt0=0;
        for(int right=0;right<nums.size();right++){
            cnt0+=1-nums[right];
            while(cnt0 > k){
                cnt0-=1-nums[left];
                left++;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};

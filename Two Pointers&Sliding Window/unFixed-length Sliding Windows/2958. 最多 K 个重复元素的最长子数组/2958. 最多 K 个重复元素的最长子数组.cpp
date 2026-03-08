class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=0,left=0;
        for(int right=0;right<nums.size();right++){
            mp[nums[right]]++;
            while(mp[nums[right]]>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};

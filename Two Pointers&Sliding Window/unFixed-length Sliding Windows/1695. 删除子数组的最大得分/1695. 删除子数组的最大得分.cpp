class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=0,tans=0,left=0;
        for(int right=0;right<nums.size();right++){
            mp[nums[right]]++;
            tans+=nums[right];
            while(mp[nums[right]]>1){
                mp[nums[left]]--;
                tans-=nums[left];
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            ans = max(tans,ans); 
        }
        return ans;
    }
};

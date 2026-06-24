class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>zero;
        int len = nums.size();
        unordered_map<int,int>mp;
        for(int i=len-1;i>=0;i--){
            if(mp[target-nums[i]]!=0){
                vector<int>ans;
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }else{
                if((target-nums[i])==nums[0]){
                    vector<int>ans;
                    ans.push_back(0);
                    ans.push_back(i);
                    return ans;
                }
            }
            mp[nums[i]]=i;
        }
        return zero;
    }
};

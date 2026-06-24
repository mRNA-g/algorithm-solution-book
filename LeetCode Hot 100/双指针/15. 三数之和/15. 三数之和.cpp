class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int len = nums.size();
        for(int i=0;i<len-1&&nums[i]<=0;i++){
            if(i!=0&&nums[i]==nums[i-1]){
                continue;
            }
            int r=len-1;
            int tar=-nums[i];
            for(int l=i+1;l<len;l++){
                if(l>i+1&&nums[l]==nums[l-1]){
                    continue;
                }
                while(l<r&&nums[l]+nums[r]>tar){
                    r--;
                }
                if(l==r){
                    break;
                }
                if(nums[l]+nums[r]==tar){
                    ans.push_back({nums[i],nums[l],nums[r]});
                }
            }
            
        }
        return ans;
    }
};

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int len = nums.size();
        vector<int>ans;
        for(int i=0;i<len;i++){
            if(nums[i]==target){
                int t = abs(i-start);
                ans.push_back(t);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};

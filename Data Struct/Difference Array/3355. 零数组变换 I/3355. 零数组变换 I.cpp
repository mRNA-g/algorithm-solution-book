class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> diff(nums.size()+2,0);
        diff[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            diff[i] = nums[i]-nums[i-1];
        }
        for(auto& q:queries){
            diff[q[0]]--;
            diff[q[1]+1]++;
        }
        for(int i=0;i<nums.size();i++){
            diff[i+1] += diff[i];
            if(diff[i]>0)return false; 
        }
        return true;
    }
};

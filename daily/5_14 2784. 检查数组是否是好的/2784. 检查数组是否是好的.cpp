class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len = nums.size();
        for(int i=0;i<len-1;i++){
            if(i+1!=nums[i]){
                return false;
            }
        }
        if(len-1!=nums[len-1]){
            return false;
        }
        return true;
    }


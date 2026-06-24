class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int l=0,r=0;
        for(l=0;l<=r&&r<len;l++){
            if(nums[l]==0){
                while(r<len&&nums[r]==0){
                    r++;
                }
                if(r==len){
                    nums[l] = nums[r-1];
                    nums[r-1] = 0;
                }else{
                    nums[l] = nums[r];
                    nums[r] = 0;
                }
            }else{
                r++;
            }

        }
    }
};

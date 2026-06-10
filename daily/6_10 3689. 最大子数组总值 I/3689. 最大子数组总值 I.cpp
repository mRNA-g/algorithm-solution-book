class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int len = nums.size();
        long long x=0,n=1e9+1;
        for(int i=0;i<len;i++){
            if(x<nums[i]){
                x = nums[i];
            }
            if(n>nums[i]){
                n = nums[i];
            }
        }
        return (x-n)*k;
    }
};

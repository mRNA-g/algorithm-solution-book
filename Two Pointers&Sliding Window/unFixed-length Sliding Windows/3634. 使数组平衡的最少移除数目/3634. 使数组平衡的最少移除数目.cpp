class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int Tans=0;
        for(int left=0,right=0;right<nums.size();right++){
            while(1LL*nums[left]*k<nums[right]){
                left++;
            }
            Tans = max(Tans,right-left+1);
        }
        return nums.size()-Tans;
    }
};


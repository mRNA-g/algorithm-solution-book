class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0,s1=0,s2=0,l1=0,l2=0;
        for(int r=0;r<nums.size();r++){
            s1+=nums[r];
            s2+=nums[r];
            while(l1<=r&&s1>goal){
                s1 -= nums[l1++];
            }
            while(l2<=r&&s2>=goal){
                s2 -= nums[l2++];
            }
            ans += l2-l1;
        }
        return ans;
    }
};

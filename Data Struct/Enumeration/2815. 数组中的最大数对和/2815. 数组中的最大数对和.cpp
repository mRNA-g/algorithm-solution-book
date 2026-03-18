class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans=0;
        int cnt[10]={};
        for(int i=0;i<nums.size();i++){
            int Maxbit=0;
            for(int j=nums[i];j;j/=10){
                Maxbit = max(Maxbit,j%10);
            }
            if(cnt[Maxbit]!=0)ans = max(cnt[Maxbit]+nums[i],ans);
            cnt[Maxbit] = max(cnt[Maxbit],nums[i]);
        }
        return ans==0?-1:ans;
    }
};

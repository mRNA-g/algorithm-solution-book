class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
       long long sum=0;
       vector<int> ans(nums.size(),-1);
      if(k==0)return nums; if(nums.size()<2*k+1)return ans;
      
       for(int i=0;i<2*k+1;i++){
           sum+=nums[i];
       }
       ans[k]=sum/(2*k+1);
       for(int i=k;i<nums.size()-k-1;i++){
           sum=sum-nums[i-k]+nums[i+k+1];
           ans[i+1]=sum/(2*k+1);
       }
       return ans;
    }
};
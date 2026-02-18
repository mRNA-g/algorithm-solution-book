class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int len=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
         int temp=sum;
        for(int i=0;i<len-k;i++){
            temp= max(temp,sum+nums[k+i]-nums[i]);
            sum=sum+nums[k+i]-nums[i];   //更新状态
        }
        return (double)temp/k;
    }
};
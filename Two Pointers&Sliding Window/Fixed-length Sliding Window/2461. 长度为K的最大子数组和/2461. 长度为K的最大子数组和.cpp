class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> unmap;
    long long sum=0,ans=0,m=k;
    for(int i=0;i<k;i++){
        unmap[nums[i]]++;
        sum+=nums[i];
        if(unmap[nums[i]]==1){
            m--;
        }
    }
    if(m==0){
        ans=max(ans,sum);
    }
    for(int i=0;i<nums.size()-k;i++){
        unmap[nums[i]]--;
        unmap[nums[i+k]]++;
        if(unmap[nums[i]]==0&&nums[i]!=nums[i+k])m++;
if(unmap[nums[i+k]]==1&&nums[i]!=nums[i+k])m--;
sum=sum+nums[i+k]-nums[i];
if(m==0){
ans=max(ans,sum);
}else{
    continue;
}        
    }
    return ans;
    
    }
};
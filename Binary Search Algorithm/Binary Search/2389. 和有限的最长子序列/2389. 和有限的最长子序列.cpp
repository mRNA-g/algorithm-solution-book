class Solution {
    int lower_bound(vector<int> nums,int target){
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]>=target){
                right = mid-1;
            }else if(nums[mid]<target){
                left = mid+1;
            }
        }
        if(left==nums.size()){
            return nums.size();
        }
        if(nums[left]>target){
            return left;
        }
        return left+1;
    }
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>ans(queries.size());
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<queries.size();i++){
            int index = lower_bound(nums,queries[i]);
            ans[i]=index;
        }
        return ans;
    }
};

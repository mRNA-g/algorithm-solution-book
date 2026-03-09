class Solution {
    int lower_bound(vector<int>& nums,int target){
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]>=target){
                right = mid-1;
            }else{
                left = mid+1; 
            }
        }
        return left;
    }
public:
    int maximumCount(vector<int>& nums) {
        int start = lower_bound(nums,0);
        cout <<start;
        int end = lower_bound(nums,1);
        cout <<end;
        if(nums[0]==0&&nums[nums.size()-1]==0){
            return 0;
        }
        
        return (nums.size()-end)>start?(nums.size()-end):start;
    }
};

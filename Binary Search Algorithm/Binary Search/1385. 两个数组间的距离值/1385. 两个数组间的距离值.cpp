class Solution {
    int lower_bound(vector<int>& nums,int target){
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]>=target){
                right = mid-1;
            }else if(nums[mid]<target){
                left = mid+1;
            }
        } 
        return left;
    }
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<arr1.size();i++){
            int index01 = lower_bound(arr2,arr1[i]-d);
            if(index01==arr2.size()){
                ans++;
            }else if(arr2[index01]>arr1[i]+d){
                ans++;
            }
        }
        return ans;
    }
};

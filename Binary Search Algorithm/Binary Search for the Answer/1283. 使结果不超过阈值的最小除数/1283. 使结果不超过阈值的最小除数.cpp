class Solution {
    bool check(int m,vector<int>& nums,int threshold){
        int sum=0;
        for(int x:nums){
            sum+=(x+m-1)/m;
            if(sum>threshold){
                return false;
            }
        }
        return true;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=0,right=ranges::max(nums);
        while(left+1<right){
            int mid = left+(right-left)/2;
            (check(mid,nums,threshold)?right:left)=mid;
        }
        return right;
    }
};

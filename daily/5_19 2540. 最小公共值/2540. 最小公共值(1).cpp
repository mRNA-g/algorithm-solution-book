class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int len = nums1.size();
        for(int i:nums2){
            int left=0,right=len-1;
            while(left<right){
                int mid = left+(right-left)/2;
                if(nums1[mid]>i){
                    right = mid;
                }else if(nums1[mid]<i){
                    left = mid+1;
                }else if(nums1[mid]==i){
                    return i;
                }
            }
            if(nums1[left]==i){
                return i;
            }
        }
        return -1;
    }
};

class Solution {
    int lower_bound(vector<int>& nums,double target){
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
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>pairs(spells.size());
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            int index = lower_bound(potions,(double)success/spells[i]);
            pairs[i] = potions.size()-index;
        }
        return pairs;
    }
    
};

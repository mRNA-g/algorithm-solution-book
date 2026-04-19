class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int len = nums.size();
        if(len==1){
            return 0;
        }
        vector<int> preMax(len),suffMin(len);
          preMax[0] = nums[0];
        for (int i = 1; i < len; ++i) {
            preMax[i] = max(preMax[i-1], nums[i]);
        }
        
        // 后缀最小值
        suffMin[len-1] = nums[len-1];
        for (int i = len-2; i >= 0; --i) {
            suffMin[i] = min(suffMin[i+1], nums[i]);
        }
        for(int i=0;i<len;i++){
            if(preMax[i]-suffMin[i]<=k){
                return i;
            }
        }
        return -1;
    }
};

class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int pos1 = -1, pos2 = -1;
        int minDiff = INT_MAX;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                pos1 = i;
                if (pos2 != -1) {
                    minDiff = min(minDiff, i - pos2);
                }
            } else if (nums[i] == 2) {
                pos2 = i;
                if (pos1 != -1) {
                    minDiff = min(minDiff, i - pos1);
                }
            }
        }
        
        return minDiff == INT_MAX ? -1 : minDiff;
    }
};?leetcode

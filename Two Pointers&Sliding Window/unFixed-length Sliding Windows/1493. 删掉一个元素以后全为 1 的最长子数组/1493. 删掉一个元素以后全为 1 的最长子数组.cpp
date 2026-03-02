class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0, cnt0 = 0, left = 0;
        for (int right = 0; right < nums.size(); right++) {
            // 1. 入，nums[right] 进入窗口
            cnt0 += 1 - nums[right]; // 维护窗口中的 0 的个数
            while (cnt0 > 1) { // 不符合题目要求
                // 2. 出，nums[left] 离开窗口
                cnt0 -= 1 - nums[left]; // 维护窗口中的 0 的个数
                left++;
            }
            // 3. 更新答案，注意不是 right-left+1，因为我们要删掉一个数
            ans = max(ans, right - left);
        }
        return ans;
    }
};



class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            int count_a = __builtin_popcount(a); // GCC 内置函数
            int count_b = __builtin_popcount(b);
            if (count_a != count_b) {
                return count_a < count_b; // 先按 1 的个数排
            }
            return a < b; // 1 的个数相同，按数值排
        });
        return arr;
    }
};

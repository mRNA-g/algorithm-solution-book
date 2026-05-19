class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sanjiao;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = sanjiao[i-1][j-1] + sanjiao[i-1][j];
            }
            sanjiao.push_back(row);
        }
        return sanjiao;
    }
};

class Solution {
public:
    long long countPairs(vector<string>& words) {
        unordered_map <string,int> mp;
        long long ans = 0;
        for(auto& s : words){
            char base = s[0];
            for(char& ch : s){
                ch = (ch - base + 26) % 26;
            }
            ans += mp[s];
            mp[s]++;
        }
        return ans;
    }
};

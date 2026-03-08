class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<int,int> mp;
        for(auto& s:nums){
            mp[stoi(s,nullptr,2)] = 1;
        }
        int ans = 0;
        while(mp[ans]==1){
            ans++;
        }

        return bitset<32>(ans).to_string().substr(32-nums.size());
    }
};

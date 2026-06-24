class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int len = strs.size();
        vector<vector<int>>cnt(len,vector<int>(26,0));
        map<vector<int>,vector<int>>mp;
        for(int i=0;i<len;i++){
            for(char c:strs[i]){
                cnt[i][c-'a']++;
            }
            mp[cnt[i]].push_back(i);
        }
        for(auto& p:mp){
            vector<string>tmp;
            for(auto& m:p.second){
                tmp.push_back(strs[m]);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        int lens = s.size(),lent = t.size();
        if(lens!=lent){
            return false;
        }
        unordered_map<char,int>mps;
        unordered_map<char,int>mpt;
        for(int i=0;i<lent;i++){
            mps[s[i]]++;
            mpt[t[i]]++;
        }
        for(int i=0;i<26;i++){
            if(mps['a'+i]!=mpt['a'+i])return false;
        }
        return true;
    }
};

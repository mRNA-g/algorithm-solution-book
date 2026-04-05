class Solution {
public:
    int mirrorFrequency(string s) {
        int ans=0;
        unordered_map<char,int>mp;
        int len = s.size();
        for(int i=0;i<len;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<len;i++){
            if(s[i]>='a'&&s[i]<='m'){
                int k = s[i]-'a';
                ans+=abs(mp[s[i]]-mp['z'-k]);
                mp[s[i]] = -1;
                mp['z'-k] = -1;
            }else if(s[i]>='0'&&s[i]<='4'){
                int k = s[i]-'0';
                ans+=abs(mp[s[i]]-mp['9'-k]);
                mp[s[i]] = -1;
                mp['9'-k] = -1;
            }
            if(s[i]>='n'&&s[i]<='z'){
                int e = 'z'-s[i];
                if(mp['a'+e]==0)ans++;
            }else if(s[i]>='5'&&s[i]<='9'){
                int e = '9'-s[i];
                if(mp['0'+e]==0)ans++;
            }
        }
        return ans;
    }
};?leetcode

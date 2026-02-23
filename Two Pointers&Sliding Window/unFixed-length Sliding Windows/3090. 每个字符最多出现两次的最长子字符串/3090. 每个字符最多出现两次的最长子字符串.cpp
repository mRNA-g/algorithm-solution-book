class Solution {
public:
    int maximumLengthSubstring(string s) {
       int left = 0,right = 0,ans=0; 
       unordered_map<char,int> mp;
        for(;right<s.size();right++){
            mp[s[right]]++;
            while(mp[s[right]]>2){
                mp[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
        }
};
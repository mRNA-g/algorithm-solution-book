class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char,int> mp0,mp1,mp2,mp3;
        int len = s1.size();
        for(int i=0;i<len;i++){
            if(i&1){
                mp1[s1[i]]++;
                mp3[s2[i]]++;
            }else{
                mp0[s1[i]]++;
                mp2[s2[i]]++;
            }
        }
        char a = 'a';
        while(a<='z'){
            if(mp1[a]!=mp3[a])return false;
            if(mp2[a]!=mp0[a])return false;
            a++;
        }
        return true;
    }
};

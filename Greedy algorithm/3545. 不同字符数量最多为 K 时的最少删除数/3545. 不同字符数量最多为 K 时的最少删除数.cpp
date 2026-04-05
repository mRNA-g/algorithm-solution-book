class Solution {
public:
    int minDeletion(string s, int k) {
        int len = s.size(),ans=0,sss=0;
        vector<int>cnt(26,len);
        for(int i=0;i<len;i++){
            if(cnt[s[i]-'a']==len){
                cnt[s[i]-'a']=0;
                sss++;
            }
            cnt[s[i]-'a']++;
        }
        sort(cnt.begin(),cnt.end());
        for(int i=0;i<sss-k;i++){
            ans+=cnt[i];
        }
        return ans;
    }
};

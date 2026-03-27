class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>cnt1(26,0),cnt2(26,0);
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                cnt2[s[i]-'A']++;
            }else{
                cnt1[s[i]-'a']++;
            }
        }
        int ans1=0,ans2=0;
        for(int i=0;i<26;i++){
            if(cnt1[i]&1){
                if(ans1<cnt1[i]){
                    if(ans1!=0)ans2+=(ans1-1);
                    ans1 = cnt1[i];
                }else{
                    ans2+=(cnt1[i]-1);
                }
            }else{
                ans2+=cnt1[i];
            }
            if(cnt2[i]&1){
                if(ans1<cnt2[i]){
                    if(ans1!=0)ans2+=(ans1-1);
                    ans1 = cnt2[i];
                }else{

                    ans2+=(cnt2[i]-1);
                }
            }else{
                ans2+=cnt2[i];
            }
        }
        return ans1+ans2;
    }
};

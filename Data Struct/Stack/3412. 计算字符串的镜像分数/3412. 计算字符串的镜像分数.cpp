class Solution {
public:
    long long calculateScore(string s) {
        long long ans=0;
        stack<int> stk[26];
        for(int i=0;i<s.length();i++){
            if(stk[25-(s[i]-'a')].empty()){
                stk[s[i]-'a'].push(i);
            }else{
                ans+=(i-stk[25-(s[i]-'a')].top());
                stk[25-(s[i]-'a')].pop();
            }
        }
        return ans;
    }
};

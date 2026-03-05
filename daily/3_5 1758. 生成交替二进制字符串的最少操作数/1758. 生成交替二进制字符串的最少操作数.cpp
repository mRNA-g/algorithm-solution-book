class Solution {
public:
    int minOperations(string s) {
        if(s.size()==1)return 0;
        int ans01=0,ans02=0;
        int t=s[0]-'0';
        for(int i=0;i<s.size();i++){
            if((s[i]-'0')!=t){
                ans01++;
            }else{
                ans02++;
            }
            t = !t;
        }
        return min(ans01,ans02);
    }
};

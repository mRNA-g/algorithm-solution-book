class Solution {
public:
    string makeLargestSpecial(string s) {
        vector<string> sub;
        int cnt=0,left=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                cnt++;
            }else{
                cnt--;
                if(cnt==0){
                    sub.push_back("1"+makeLargestSpecial(s.substr(left+1,i-left-1))+"0");
                    left=i+1;
                }
                
            }
        }
        sort(sub.begin(),sub.end(),greater<string>{});
        string ans=accumulate(sub.begin(),sub.end(),""s);
        return ans;
    }
};
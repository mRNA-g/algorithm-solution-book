class Solution {
public:
    bool checkOnesSegment(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            if((s[i]=='1'&&s[i+1]=='1')&&(i+1<s.size())){
                while(i<s.size()&&s[i]=='1'){
                    i++;
                }
                count++;
            }
            if((s[i]=='1'&&s[i+1]!='1'&&i+1<s.size())||((i==s.size()-1)&&s[i]=='1')){
                count++;
            }
        }
        if(count>1){
            return false;
        }
        return true;
    }
};

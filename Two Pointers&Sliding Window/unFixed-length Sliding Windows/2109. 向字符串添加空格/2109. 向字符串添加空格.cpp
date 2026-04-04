class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int lens = s.size(),j=0,lenp = spaces.size();
        for(int i=0;i<lens;i++){
            if(j<lenp&&i==spaces[j]){
                ans+=' ';
                j++;
            }
                ans+=s[i];
                
        }
        return ans;
    }
};

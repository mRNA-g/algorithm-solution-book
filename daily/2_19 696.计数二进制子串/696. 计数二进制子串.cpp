
/*
小高使用单调栈失败了，被特殊数据做局了，TEL了，尝试了对特殊数据做特殊剪枝，成功是成功了，但其他数据又坏了
class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans=0;
        if(s.size()==1)return 0;
        stack<char> stk;
        for(int i=0;i<s.size()-1;i++){
            while(!stk.empty())stk.pop();
            stk.push(s[i]);
            char temp = s[i];
           int j; for(j=i+1;j<s.size()&&s[j]==temp;j++){
                stk.push(s[j]);
                
            }
            
            for(int k=j;k<s.size()&&s[k]!=temp;k++){
                
     if(!stk.empty())stk.pop();
            }
            
            if(stk.empty()){
                ans++;
            }
        }
        return ans;
    }
};
*/
//正解
class Solution {
public:
    int countBinarySubstrings(string s) {
        int ptr = 0, n = s.size(), last = 0, ans = 0;
        while (ptr < n) {
            char c = s[ptr];
            int count = 0;
            while (ptr < n && s[ptr] == c) {
                ++ptr;
                ++count;
            }
            ans += min(count, last);
            last = count;
        }
        return ans;
    }
};

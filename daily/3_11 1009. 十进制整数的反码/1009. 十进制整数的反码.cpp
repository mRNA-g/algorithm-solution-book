class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        string s = bitset<32>(n).to_string();
        int k=0;
        while(s[k]!='1'){
            k++;
        }
        s = s.substr(k);
        for(int i=0;i<s.size();i++){
            s[i]=='1'?s[i]='0':s[i]='1';
        }
        int ans = stoi(s,nullptr,2);
        return ans;
    }
};

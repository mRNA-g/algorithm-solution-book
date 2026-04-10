#include <bits/stdc++.h>
using namespace std;
bool isValid(string& s){
  bool hasDigital = false;
  bool hasSymbol = false;
  for(char c:s){
    if(c>='0'&&c<='9'){
      hasDigital = true;
    }else if(c=='#'){
      hasSymbol = true;
    }
    if(hasSymbol&&hasDigital)return true;
  }
  return false;
}
int main()
{
  string s = "kfdhtshmrw4nxg#f44ehlbn33ccto#mwfn2waebry#3qd1ubwyhcyuavuajb#vyecsycuzsmwp31ipzah#catatja3kaqbcss2th";
  int len = s.size(),ans=0;
  for(int i=0;i<len;i++){
    for(int j=8;j<=16;j++){
      if(i+j<=len){
        string sub = s.substr(i,j);
        if(isValid(sub))ans++;
      }
    }
  }
  cout<<ans;
  return 0;
}

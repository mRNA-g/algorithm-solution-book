#include<bits/stdc++.h>
using namespace std;
const int IMAX = 10000;
int ans[IMAX];
int n,st;
string s;
int main(){
  cin>>n>>s;
  int lens = s.size();
  int temp = lens;
  for(int i=lens;i>=0;i--){
    if(s[i] == '.'){
      st = lens - i;
      continue;
    }
    ans[lens-temp] = s[i]-'0';
    temp--;
  }
  while(n--){
    for(int i=0;i<lens;i++){
      ans[i]*=2;
    }
    for(int i=0;i<lens+1;i++){
      ans[i+1] += ans[i]/10;
      ans[i] %= 10;
    }
    if(ans[lens]){
      lens++;
    }
  }
  if(ans[st-1]>=5){
    ans[st]++;
  }
  for(int i=lens-1;i>=st;i--){
    cout<<ans[i];
  }
  return 0;
}

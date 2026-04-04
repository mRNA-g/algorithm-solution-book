#include<bits/stdc++.h>
using namespace std;
bool isOK(int num){
    string s = to_string(num);
    int len = s.size();
    for(int i=0;i<len;i++){
        if(s[i]=='2'||s[i]=='1'||s[i]=='0'||s[i]=='9')return true;
    }
    return false;
}
int main(){
    int sum=0;
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        if(isOK(i))sum+=i;
    }
    cout<<sum;
}

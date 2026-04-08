#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int len = s.size();
    int l=0,r=len-1,ans=0;
    while(l<r){
        if(s[l]=='A'&&s[r]=='B'){
            ans+=2;
            l++;
            r--;
        }
        if(s[l]=='B')l++;
        if(s[r]=='A')r--;
    }
    cout<<len-ans;
}

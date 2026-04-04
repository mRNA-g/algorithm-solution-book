#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    string s = to_string(n);
    int len = s.size();
    long long sum=0;
    for(int i=0;i<len;i++){
        sum+=s[i]-'0';
    }
    if(sum==1){
    cout<<n;
        return 0;
    }
    sum=1;
    for(int i=0;i<len;i++){
        sum*=10;
    }
    cout<<sum;
}

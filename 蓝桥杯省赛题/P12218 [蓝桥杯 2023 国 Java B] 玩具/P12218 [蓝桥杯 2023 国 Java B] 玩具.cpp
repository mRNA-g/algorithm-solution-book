#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>w(2*n);
    for(int i=0;i<2*n;i++){
        cin>>w[i];
    }
    sort(w.begin(),w.end());
    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=(1LL*w[i]*w[2*n-1-i]);
    }
    cout<<ans;
    return 0;
}

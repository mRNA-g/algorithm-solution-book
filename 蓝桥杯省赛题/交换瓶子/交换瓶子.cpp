#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,ans=0;cin>>N;vector<int>a(N+1,0);
    for(int i=1;i<=N;i++){
        cin>>a[i];
    }
    for(int j=0;j<N;j++){
        int k=0;
        for(int i=1;i<=N;i++){
            if(a[a[i]]!=a[i]){
                k++;
                int t=a[a[i]];
                a[a[i]] = a[i];
                a[i] = t;
                ans++;
            }
        }
        if(k==0)break;
    }
    cout<<ans;
    return 0;
}

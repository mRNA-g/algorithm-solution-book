#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<int>cap(m);
    for(int i=0;i<m;i++){
        cin>>cap[i];
    }
    sort(cap.begin(),cap.end());
    for(int i=1;i<=n;i++){
        int t1 = abs(i-cap[0]);
        int t2 = abs(i-cap[m-1]);
        cout<<max(t1,t2)<<' ';
    }
    return 0;
}

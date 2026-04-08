#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<long long>A(n),B(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    if(n==1){
        if(A[0]>B[0]){
            cout<<0;
            return 0;
        }else{
            cout<<1;
            return 0;
        }
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int p1 = n-1,p2 = n-1,ans=0;
    while(p1>=0&&p2>=0){
        if(A[p1]<=B[p2]){
            p2--;
            ans++;
        }else{
            p2--;
            p1--;
        }
    }
    
    cout<<ans;
    return 0;
}

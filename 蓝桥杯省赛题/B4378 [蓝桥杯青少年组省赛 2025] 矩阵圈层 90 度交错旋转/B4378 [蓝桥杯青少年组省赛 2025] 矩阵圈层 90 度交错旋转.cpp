#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>a[i][j];
    }
    for(int i=0;i<(n+1)/2;i++){
        if(i%2==0){
            for(int j=i;j<n-i;j++){
                swap(a[i][n-1-j],a[n-1-j][n-1-i]);
            }
            for(int j=i;j<n-1-i;j++){
                swap(a[n-1-j][i],a[i][j]);
            }
            for(int j=i+1;j<n-1-i;j++){
                swap(a[j][i],a[n-1-i][j]);
            }
        }else{
            for(int j=i;j<n-i;j++){
                swap(a[i][j],a[n-1-j][i]);
            }
            for(int j=i;j<n-1-i;j++){
                swap(a[j][n-1-i],a[n-1-i][n-1-j]);
            }
            for(int j=i+1;j<n-1-i;j++){
                swap(a[i][j],a[n-1-i][n-1-j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}

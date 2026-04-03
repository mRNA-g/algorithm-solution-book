#include<bits/stdc++.h>
using namespace std;
    int sum(long long num){
        string s = to_string(num);
        int len = s.size();
        int rtn=0;
        for(int i=0;i<len;i++){
            int n = s[i]-'0';
            rtn+=n;
        }
        return rtn;
    }
int main(){
    long long n,m;cin>>n>>m;
    vector<long long>a;
    vector<vector<long long>>ta(101);
    for(long long i=1;i<=n;i++){
        ta[sum(i)].push_back(i);
    }
    for(long long i=1;i<=100;i++){
        for(long long num:ta[i]){
            a.push_back(num);
        }
    }
    cout<<a[m-1];
    return 0;
}

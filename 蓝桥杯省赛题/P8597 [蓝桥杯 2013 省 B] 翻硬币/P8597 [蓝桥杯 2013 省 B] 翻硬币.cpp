#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;cin>>s1>>s2;
    vector<int> index;
    int len = s1.size();
    for(int i=0;i<len;i++){
        if(s1[i]!=s2[i]){
            index.push_back(i);
        }
    }
    len = index.size();
    int ans = 0;
    for(int i=0;i<len;i+=2){
        ans += (index[i+1]-index[i]);
    }
    cout<<ans;
}

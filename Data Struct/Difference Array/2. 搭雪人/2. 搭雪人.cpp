#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int N;cin>>N;int t=N;
  vector<ll> L(N),R(N);
  vector<ll> X;
  for(int i=0;i<N;i++){
    cin>>L[i]>>R[i];
    X.push_back(L[i]);
    X.push_back(R[i]+1);
  }
  sort(X.begin(),X.end());
  X.erase(unique(X.begin(),X.end()),X.end());

  vector<ll>person(X.size(),0);
  for(int i=0;i<N;i++){
    int l = lower_bound(X.begin(),X.end(),L[i])-X.begin();
    int r = lower_bound(X.begin(),X.end(),R[i]+1)-X.begin();
    person[l]++;
    person[r]--;
  }
  ll len = person.size(); 
  for(ll i=1;i<len;i++){
    person[i]+=person[i-1];
  }
  map<int,ll>mp;
  for(int i=len-1;i>=0;i--){
    mp[person[i]]=X[i];
  }
  for(int k=1;k<=t;k++){
    if(mp.find(k)!=mp.end()){
      cout<<mp.find(k)->second<<endl;
    }else{
      cout<<-1<<endl;
    }
  }
}

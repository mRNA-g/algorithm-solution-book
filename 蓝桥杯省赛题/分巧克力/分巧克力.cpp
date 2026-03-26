#include <bits/stdc++.h>
using namespace std;
bool check(vector<int>& H,vector<int>& W,int K,int target,int N){
  int sum=0;
  for(int i=1;i<=N;i++){
      int a = H[i]/target;
      int b = W[i]/target;
      sum+=a*b;
    if(sum>=K){
      return false;
    }
  }
  return true;
}


int main()
{
  int N,K;cin>>N>>K;
  vector<int> H(N+1),W(N+1);
  for(int i=1;i<=N;i++){
    cin>>H[i]>>W[i];
  }
  int ans=0,left=0,right=1e5+1;
  while(left<=right){
    int mid = left+(right-left)/2;
    if(check(H,W,K,mid,H.size()-1)){
      right = mid-1;
    }else{
      ans=mid;
      left = mid+1;
    }
  }
  cout<<ans<<endl;
  return 0;
}

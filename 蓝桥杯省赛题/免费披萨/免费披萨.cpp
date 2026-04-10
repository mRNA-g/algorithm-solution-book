#include<bits/stdc++.h>
using namespace std;
int build(int p,int x,vector<int>& d){
    int num = 0;
    for(int i=0;i<p;i++)num=num*10+d[i];
    num = num*10+x;
    for(int i=p;i<8;i++)num=num*10+d[i];
    return num;
}
int main(){
    int n;cin>>n;
    vector<int>d={1,2,3,4,5,6,7,8};
    int m=0;
    long long ans=99999999999;
    do{
        for(int i=0;i<=8;i++){
            for(int j=1;j<=8;j++){
                int o=build(i,j,d);
                int cg=__gcd(o,n);
                if(cg>m){
                    m=cg;
                    ans=o;
                }else if(cg==m&&o<ans)ans=o;
            }
        }
    }while(next_permutation(d.begin(),d.end()));
    cout<<ans<<endl;
}

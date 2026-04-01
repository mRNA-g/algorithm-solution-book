#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        int len = s.size();
        int Tindex01=0,index01=0;
        int cnt=0;
        for(int i=0;i<len;i++){
            if(!(s[i]=='l'||s[i]=='q'||s[i]=='b')){
                 Tindex01 = i;
                if(cnt==0){
                    cnt++;
                    index01=i;
                }
            }
            
        }
        int right=Tindex01,left=index01;
        bool flag01=true,flag02=true;
        while(left<=right){
            if(s[left]!=s[right])flag01 = false;
            left++;right--;
        }
        right=Tindex01,left=index01;
        while(left>=0&&right<=len-1){
            if(s[left]!=s[right])flag02 = false;
            left--;right++;
        }
        if(flag01&&flag02&&left==-1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}

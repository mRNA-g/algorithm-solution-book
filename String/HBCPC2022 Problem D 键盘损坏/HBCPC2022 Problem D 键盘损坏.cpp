#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int fast,slow=0;
	int len = s.size();
	for(fast=1;fast<len;fast++){
		if(s[slow]!=s[fast]){
			s[++slow] = s[fast];
		}
	}
	s.erase(s.begin()+slow+1,s.end());
	cout<<s<<endl;
	return 0;
}

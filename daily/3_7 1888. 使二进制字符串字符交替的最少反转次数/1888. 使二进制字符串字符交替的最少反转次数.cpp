class Solution {
public:
    int minFlips(string s) {
        if(s.size()==1)return 0;
        int count=0,ans=s.size(),n=s.size();
        for(int i=0;i<2*n-1;i++){
            if(s[i%n]%2==i%2){
                count++;
            }
            int left = i-n+1;
            if(left<0){
                continue;
            }
            ans = min({ans,count,n-count});
            if(s[left]%2==left%2){
                count--;
            }
        }
        return ans;
    }
};

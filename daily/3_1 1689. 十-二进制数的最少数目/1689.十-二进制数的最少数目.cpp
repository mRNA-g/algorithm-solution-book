class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            int t=n[i]-'0';
            ans=max(ans,t);
        }
        return ans;
    }
};
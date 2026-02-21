class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long ans=0,left=0,right=k-1;
        for(int i=0;i<k;i++)ans+=cardPoints[i];
        long long temp=ans;
        for(int i=0;i<k;i++){
            temp=temp-cardPoints[k-i-1]+cardPoints[cardPoints.size()-1-i];
            ans=max(ans,temp);
        }
        return ans;
    }
};
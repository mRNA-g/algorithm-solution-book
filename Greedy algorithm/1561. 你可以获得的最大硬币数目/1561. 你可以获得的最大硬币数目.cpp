class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int len = piles.size();
        sort(piles.begin(),piles.end());
        int ans=0;
        int s = len/3; 
        for(int i=s;i<len;i+=2){
            ans+=piles[i];
        }
        return ans;
    }
};

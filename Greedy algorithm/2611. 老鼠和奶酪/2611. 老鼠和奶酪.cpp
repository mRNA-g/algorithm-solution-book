class Solution {
    
public:
    
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
    
        int ans = 0,len = reward1.size();

        vector<int>diff(len);
        for(int i=0;i<len;i++){
            ans+=reward2[i];
            diff[i] = reward1[i]-reward2[i];
        }
        sort(diff.begin(),diff.end());
        for(int i=len-1;i>=len-k;i--){
            ans+=diff[i];
        }
        return ans;
    }
};

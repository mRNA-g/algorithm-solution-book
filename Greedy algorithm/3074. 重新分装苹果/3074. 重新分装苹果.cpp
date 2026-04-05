class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0,ans=0;
        for(int a:apple){
            sum+=a;
        }
        sort(capacity.begin(),capacity.end());
        int len = capacity.size(); 
        for(int i=len-1;i>=0;i--){
            if(sum-capacity[i]>0){
                ans++;
                sum-=capacity[i];
            }else{
                return ans+1;
            }
        }
        return 0;
    }
};

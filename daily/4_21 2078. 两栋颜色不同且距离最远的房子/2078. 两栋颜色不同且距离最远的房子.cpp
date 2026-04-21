class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int len = colors.size();
        if(colors[0]!=colors[len-1]){
            return len-1;
        }
        int ans=0;
        for(int i=0;i<len;i++){
            if(colors[i]!=colors[0]){
                if(i>abs(i-len+1)){
                    ans = max(ans,i);
                }else{
                    ans = max(ans,abs(i-len+1));
                }
            }
        }
        return ans;
    }
};

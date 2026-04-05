class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int len = capacity.size(),ans=0;
        vector<int> realCapacity(len);
        for(int i=0;i<len;i++){
            realCapacity[i] = capacity[i]-rocks[i];
        }
        sort(realCapacity.begin(),realCapacity.end());
        for(int i=0;i<len;i++){
            if(additionalRocks>=realCapacity[i]){
                additionalRocks-=realCapacity[i];
                ans++;
            }else{
                break;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> road(102,0);
        int ans=0;
        for(auto& car:nums){
            road[car[0]]++;
            road[car[1]+1]--;
        }
        for(int i=0;i<=100;i++){
            road[i+1]+=road[i];
            if(road[i]!=0)ans++;
        }
        return ans;
    }
};

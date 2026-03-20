class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<long long> diff(1002);
        for(auto& a:trips){
            diff[a[1]]+=a[0];
            diff[a[2]]-=a[0];
        }
        for(int i=0;i<=1000;i++){
            diff[i+1]+=diff[i];
            if(diff[i]>capacity)return false;
        }
        return true;
    }
};

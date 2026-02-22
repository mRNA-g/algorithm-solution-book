class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<arrivals.size();i++){
            if(mp[arrivals[i]]==m){
                ans++;
                arrivals[i]=0;
            }else{
                mp[arrivals[i]]++;
            }
            int left = i-w+1;
            if(left>=0){
                mp[arrivals[left]]--;
            }
            }
            
        return ans;
    }
};
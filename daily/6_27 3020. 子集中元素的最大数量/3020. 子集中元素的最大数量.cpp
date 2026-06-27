class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long,int> cnt;
        for(int i:nums){
            cnt[i]++;
        }
        int ans=(cnt[1]-1)|1;
        cnt.erase(1);
        for(auto& [num,_]:cnt){
            int res = 0;
            auto x = num;
            while(cnt.contains(x)&&cnt[x]>=2){
                res+=2;
                x *= x;
            }
            ans = max(ans,res+(cnt.contains(x)?1:-1));
        }
        return ans;
    }
};

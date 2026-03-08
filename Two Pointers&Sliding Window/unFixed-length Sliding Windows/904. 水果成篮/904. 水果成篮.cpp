class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0,left=0;
        unordered_map<int, int> cnt;
        for(int i=0;i<fruits.size();i++){
            cnt[fruits[i]]++;
            while(cnt.size()>2){
                cnt[fruits[left]]--;
                if(cnt[fruits[left]]==0){
                    cnt.erase(fruits[left]);
                }
                left++;
            }
            ans = max(ans,i-left+1);
        }
        return ans;
    }
};

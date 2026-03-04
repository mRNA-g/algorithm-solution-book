class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int ans = 0;
        vector<int>arr(s.size());
        for(int i=0;i<s.size();i++){
            arr[i] = abs(s[i]-t[i]);
        }
        int nums = 0;
        int left = 0;
        for(int i=0;i<s.size();i++){
            nums+=arr[i];
            while(nums>maxCost){
                nums-=arr[left];
                left++;
            }
            ans = max(ans,i-left+1);
        }
        return ans;
    }
};

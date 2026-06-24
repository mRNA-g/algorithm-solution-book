class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int len_p = p.size();
        int len_s = s.size();
        vector<int> ans;
        vector<int>cnt_p(26,0);
        for(int i=0;i<len_p;i++){
            cnt_p[p[i]-'a']++;
        }
        vector<int>cnt_s(26,0);
        for(int high = 0,low = 0;high<len_s;high++){
            while(high>=len_p-1&&high-low>=len_p){
                cnt_s[s[low]-'a']--;
                low++;
            }
            cnt_s[s[high]-'a']++;
            if(cnt_s==cnt_p){
                ans.push_back(low);
            }
        }
        return ans;
    }
};

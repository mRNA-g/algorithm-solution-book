class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sets;
        int len=0;
        for(int high=0,low=0;high<s.size();high++){
            while(low < high&&sets.count(s[high])!=0){
                sets.erase(s[low++]);
            }
            sets.insert(s[high]);
            len = max(len,high-low+1);
        }
        return len;
    }
};

class Solution {
    int lower_bound(vector<int>& nums,int target){
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]>=target){
                right = mid-1;
            }else if(nums[mid]<target){
                left = mid+1;
            }
        }
        return left;
    }
    vector<int> MinMax(vector<string>& nums){
        map<char,int> mp;
        vector<int>rtn(nums.size());
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                mp[nums[i][j]]++;
            }
            rtn[i] = mp.begin()->second;
            mp.clear();
        }
        return rtn;
    }
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> ans(queries.size());
        vector<int> diffqueries(queries.size());
        vector<int> diffwords(words.size());
        diffqueries = MinMax(queries);
        diffwords = MinMax(words);
        sort(diffwords.begin(),diffwords.end());
        for(int i=0;i<diffqueries.size();i++){
            ans[i] = diffwords.size()-lower_bound(diffwords,diffqueries[i]+1);
        }
        return ans;
    }
};

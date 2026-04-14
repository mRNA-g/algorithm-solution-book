class Solution {
bool check(vector<int>& candies,long long cur,long long k){
    long long sum = 0;
    int len = candies.size();
    for(int i=0;i<len;i++){
        sum+=(candies[i]/cur);
        if(sum>=k)return true;
    }
    return false;
}
public:
    int maximumCandies(vector<int>& candies, long long k) {
        sort(candies.begin(),candies.end());
        int len = candies.size();
        long long left=0,right=candies[len-1]+1;  
        while(left+1<right){
            long long mid = left+(right-left)/2;
            if(check(candies,mid,k)){
                left = mid;
            }else{
                right = mid;
            }
        }
        return left;
    }
};

class Solution {
public:
    int minimumK(vector<int>& nums) {
        auto check=[&](long long k)->bool{
            long long sum = 0;
            for(int n : nums){
                if(n%k==0){
                    sum+=n/k;
                }else{
                    sum+=(n/k+1);
                }
            }
            return sum<=1LL*k*k;
        };
        long long n = ranges::max(nums);
        long long left=ceil(sqrt(nums.size()))-1,right=n;
        while(left+1<right){
            long long mid = left+(right-left)/2;
            (check(mid)?right:left) = mid;
        }
        return left+1;
    }
};

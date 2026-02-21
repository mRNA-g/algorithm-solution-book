class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        long long ans=0;
        for(;left<=right;left++){
            long long temp = __builtin_popcount(left);
            int cnt=0;
            for(long long i=temp;i>0;i--){
                if(temp%i==0)cnt++;
            }
            if(cnt==2)ans++;
        }
        return ans;
    }
};
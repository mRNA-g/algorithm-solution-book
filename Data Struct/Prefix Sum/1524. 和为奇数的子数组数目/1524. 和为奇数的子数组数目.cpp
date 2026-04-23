class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int len = arr.size();
        vector<long long> sum(len+1);
        for(int i=0;i<len;i++){
            sum[i+1]=sum[i]+arr[i];
        }
        long long ji=0,ou=0;
        long long ans = 0;
        long long k = 7+1e9;
        for(long long s:sum){
            if(s%2==0){
                ans+=ji;
                ou++;
                ans%=k;
            }else{
                ans+=ou;
                ji++;
                ans%=k;
            }
        }
        
        return ans;
    }
};




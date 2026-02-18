class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       int sum = 0;
       int count = 0;
       int len=arr.size();
       for(int i=0;i<k;i++){
           sum+=arr[i];
       }
       if((double)sum/k>=threshold)count++;
       for(int i=0;i<len-k;i++){
           if((double)(sum+arr[i+k]-arr[i])/k>=threshold){
               count++;
           }
           sum=sum+arr[i+k]-arr[i]; //更新状态
       }
       return count;
    }
};
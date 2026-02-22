class Solution {
public:
    int binaryGap(int n) {
        bitset<32>arr(n);
        int ans=0;
        int right=31;
        while(arr[right]!=1){
                right--;
            }
            int left = right-1;
        for(;right>=left&&left>=0;left--){
            if(arr[left]==0){
                continue;
            }else{
                int index=right-left;
                if(index==0){
                    return 0;
                }else{
                    ans=max(ans,index);
                }
                right=left;
            }
        }
        return ans;
    }
};
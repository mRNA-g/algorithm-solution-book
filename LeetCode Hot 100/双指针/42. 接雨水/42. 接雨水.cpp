class Solution {
public:
    int trap(vector<int>& nums) {
        long long sum=0;
        int len = nums.size();
        int l=0,r=len-1;
        int min_h=0;
        int up=0,down=len-1;
        while(l<=r){
            while(l<len&&(nums[l]==0||nums[l]<=min_h)){
                l++;
            }
            while(r>=0&&(nums[r]==0||nums[r]<=min_h)){
                r--;
            }
            if(l==len){
                break;
            }
            if(r==-1){
                break;
            }
            int w = r-l+1;
            int t = min(nums[l],nums[r]);
            int t0 = w*(t-min_h);
            sum+=t0;
            min_h=t;
            if(nums[l]<nums[r]){
                l++;
            }else{
                r--;
            }
        }
        while(nums[up]==0){
            if(up+1<len){
                up++;
            }else{
                break;
            }
        }
        while(nums[down]==0){
            if(down-1>=0){
                down--;
            }else{
                break;
            }
        }
        vector<int>prefixed(len+1,0);
        for(int i=0;i<len;i++){
            prefixed[i+1] = prefixed[i]+nums[i];
        }
        cout<<sum;
        int ans = sum-(prefixed[down+1]-prefixed[up]);
        return ans;
    }
};

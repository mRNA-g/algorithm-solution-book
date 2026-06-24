class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int l=0,r=len-1;
        int ans=0;
        while(l<r){
            int w = r-l;
            int h = min(height[l],height[r]);
            ans = max(ans,w*h);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};

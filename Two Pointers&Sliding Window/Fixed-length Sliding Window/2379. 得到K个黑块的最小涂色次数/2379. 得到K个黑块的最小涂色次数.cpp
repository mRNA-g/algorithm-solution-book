class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int temp=0;
        int ans = blocks.size();
        for(int i=0;i<k;i++){
           if(blocks[i]=='W')temp++;
        }
        if(temp==0)return 0;
        ans=temp;
        for(int i=0;i<blocks.size()-k;i++){
            if(blocks[i]=='W')temp--;
            if(blocks[i+k]=='W')temp++;
            ans=min(temp,ans);
        }
        return ans;
    }
};
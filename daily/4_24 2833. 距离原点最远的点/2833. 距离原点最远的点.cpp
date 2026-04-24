class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        unordered_map<char,int>cnt;
        int len = moves.size();
        for(int i=0;i<len;i++){
            cnt[moves[i]]++;
        }
        int ans=0;
        if(cnt['L']>=cnt['R']){
            ans = cnt['L']+cnt['_']-cnt['R'];
        }else{
            ans = cnt['R']+cnt['_']-cnt['L'];
        }
        return ans;
    }
};

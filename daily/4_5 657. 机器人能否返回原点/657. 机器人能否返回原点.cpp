class Solution {
public:
    bool judgeCircle(string moves) {
        int stk1=0,stk2=0;
        int len = moves.size();
        for(int i=0;i<len;i++){
            if(moves[i]=='L')stk1++;
            if(moves[i]=='R')stk1--;
            if(moves[i]=='U')stk2++;
            if(moves[i]=='D')stk2--;
        }
        if(stk1==0&&stk2==0)return true;
        return false;
    }
};

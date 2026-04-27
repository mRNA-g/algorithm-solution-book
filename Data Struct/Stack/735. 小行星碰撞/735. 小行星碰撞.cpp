class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        vector<int> stk;
        int len = asteroids.size();
        for(int i=0;i<len;i++){
            if(asteroids[i]>0){
                stk.push_back(asteroids[i]);
            }bool ok = true;
                while(!stk.empty()&&stk.back()>0){
                    int top = stk.back();
                    if(top <= -asteroids[i]){
                        stk.pop_back();
                    }
                    if(top>=-asteroids[i]){
                        ok = false;
                        break;
                    }
                }
                if(ok){
                    stk.push_back(asteroids[i]);
                }
            }
        
        return stk;
    }
};

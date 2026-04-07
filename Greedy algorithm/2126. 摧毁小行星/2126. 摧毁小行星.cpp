class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int len = asteroids.size();
        long long mas = mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<len;i++){
            if(asteroids[i]<=mas){
                mas+=asteroids[i];
            }else{
                return false;
            }
        }
        return true;
    }
};

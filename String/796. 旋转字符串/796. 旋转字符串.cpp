class Solution {
    vector<int>kmp_search(const string& text,const string& goal){
        int m = goal.size();
        vector<int>pi(m);
        int cnt = 0;
        for(int i=1;i<m;i++){
            char b = goal[i];
            while(cnt&&goal[cnt]!=b){
                cnt = pi[cnt-1];
            }
            if(goal[cnt]==b){
                cnt++;
            }
            pi[i] = cnt;
        }
        vector<int> pos;
        cnt = 0;
        for(int i=0;i<text.size();i++){
            char b = text[i];
            while(cnt&&goal[cnt]!=b){
                cnt = pi[cnt-1];
            }
            if(goal[cnt]==b){
                cnt++;
            }
            if(cnt==m){
                pos.push_back(i-m+1);
                cnt = pi[cnt-1];
            }
        }
        return pos;
    }
public:
    bool rotateString(string s, string goal) {
        return s.size() == goal.size() && !kmp_search(s+s,goal).empty();
    }
};

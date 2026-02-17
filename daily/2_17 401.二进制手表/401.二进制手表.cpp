class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
       vector<string> rtn;               
       for(int i=0;i<=11;i++){
           for(int j=0;j<=59;j++){ if(__builtin_popcount(i)+__builtin_popcount(j)==turnedOn){
                   rtn.push_back(to_string(i)+":"+(j<10?"0"+to_string(j):to_string(j)));
               }
           }
       }
       return rtn;
    }
};
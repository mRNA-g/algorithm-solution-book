class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int len = s1.size();
        bool flag01,flag02;
        for(int i=0;i<len;i++){
            char c = s1[i];
            flag01=false;flag02=false;
            if(i%2==1){
                flag01 = true;
            }else{
                flag02 = true;
            }
            bool flag03 = true;
            for(int j=0;j<len;j++){
                if(flag01&&(j%2==1)){
                    if(c==s2[j]){
                        flag03=false;
                    }
                }else if(flag02&&(j%2==0)){
                    if(c==s2[j]){
                        flag03=false;
                    }
                }
            }
            if(flag03)return false;
        }
        return true;
    }
};

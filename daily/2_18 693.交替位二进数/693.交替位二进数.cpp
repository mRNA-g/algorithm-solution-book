class Solution {
public:
    bool hasAlternatingBits(int n) {
        int bit=n%2;
        while(n!=0){
            n/=2;
            if(bit!=n%2){
                bit=n%2;
            }else{
                return false;
            }
        }
        return true;
    }
};
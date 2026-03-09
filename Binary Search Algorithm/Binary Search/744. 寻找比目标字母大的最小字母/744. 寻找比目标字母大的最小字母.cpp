class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left=-1,right=letters.size();
        while(left+1<right){
            int mid = left+(right-left)/2;
            (letters[mid]>target?right:left) = mid;
        }
        if(left==-1||right==letters.size())return letters[0];
        return letters[right];
    }
};

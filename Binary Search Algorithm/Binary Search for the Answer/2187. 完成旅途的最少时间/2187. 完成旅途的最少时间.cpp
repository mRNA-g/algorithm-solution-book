class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        auto check = [&](long long x)->bool{
            long long sum=0;
        for(int i:time){
            sum+=x/i;
            if(sum>=totalTrips){
                return true;
            }
        }
        return false;
        };
        long long left=0,right=1LL*ranges::min(time)*totalTrips;
        while(left+1<right){
            long long mid = left+(right-left)/2;
            (check(mid)?right:left) = mid;
        }
        return right;
    }
};

class RangeFreqQuery {
    int lower_bound(vector<int>&nums,int target){
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]>=target){
                right = mid-1;
            }else if(nums[mid]<target){
                left = mid+1;
            }
        }
        return left;
    }
    unordered_map<int,vector<int>> pos;
public:
    RangeFreqQuery(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            pos[arr[i]].push_back(i);
        }
    }
    
    int query(int left, int right, int value) {
        auto it = pos.find(value);
        if(it==pos.end()){
            return 0;
        }
        auto& a = it->second;
        int start = lower_bound(a,left);
        int end = lower_bound(a,right);
        return end==a.size()||a[end]!=right?end-start:end-start+1;
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */

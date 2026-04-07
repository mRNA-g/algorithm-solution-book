class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.begin(),pizzas.end(),greater());
        int days = pizzas.size()/4;
        int odd = (days+1)/2;
        long long ans = 0;
        for(int i=0;i<odd;i++){
            ans+=pizzas[i];
        }
        for(int i=0;i<days/2;i++){
            ans+=pizzas[odd+1+i*2];
        }
        return ans;
    }
};

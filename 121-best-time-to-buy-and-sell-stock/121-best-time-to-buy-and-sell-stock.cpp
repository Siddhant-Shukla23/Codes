class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size()-1;
        int minPrice=INT_MAX;
        int sum=0;
       for(int i=0;i<=n;i++){
               minPrice=min(minPrice,prices[i]);
               sum=max(sum,prices[i]-minPrice);
       }
        return sum;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int mini = prices[0];
        // humne arr[1] se sell kiya. kyuki arr[0] pe kharida hai  AUR USSE MINM MAAN LIYA kyuki ki usse pehle koi nhi hai  
        for(int i = 1;i<n;i++){
            int cost = prices[i] - mini;
            profit = max(cost,profit);
            //before moving to next guy please update minm becuse min is from 1st to i-1
            mini = min(mini,prices[i]);
        }
        return profit;
}
};

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int bought = prices[0], n = prices.size(), maxprofit = 0;
    for(int i=1; i<n; i++){
        int profit = prices[i] - bought; // your profit = sp - cp
        maxprofit = max(maxprofit, profit); // maxprofit you have so far
        bought = min(bought, prices[i]); //find the least value so that you can buy on that day
    }

    return maxprofit;
}

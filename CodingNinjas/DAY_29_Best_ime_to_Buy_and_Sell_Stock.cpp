You are given an array/list 'prices' where the elements of the array represent the prices of the stock as they were yesterday
and indices of the array represent minutes. Your task is to find and return the maximum profit you can make by
buying and selling the stock. You can buy and sell the stock only once. Note: You can't sell without buying first.
For Example:
For the given array [ 2, 100, 150, 120],
The maximum profit can be achieved by buying the stock at minute when its price is Rs. 2 and selling it at minute 2 when its price
is Rs. 150.
So, the output will be 148.
Sample Input 1:
2
4
1 2 3 4
4
2 2 2 2
Sample Output 1:
3
0
Explanation For Sample Output 1:
For the first test case, it’s optimal to buy the stock at minute 0 and sell it at minute 3 to get a maximum profit of 3.

For the second test case, the maximum profit will be 0 for all possible ways of buying and selling stock.
Answer:

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    if (prices.size() < 2) {
 
        return 0;
    }

    int minPrice = prices[0]; 
    int maxProfit = 0;        

    for (int i = 1; i < prices.size(); ++i) {
        
        minPrice = min(minPrice, prices[i]);

       
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}

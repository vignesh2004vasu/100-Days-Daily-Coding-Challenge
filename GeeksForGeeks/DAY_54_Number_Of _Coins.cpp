Given a value V and array coins[] of size M, the task is to make the change for V cents, 
given that you have an infinite supply of each of coins{coins1, coins2, ..., coinsm} valued coins.
Find the minimum number of coins to make the change. If not possible to make change then return -1.


Example 1:

Input: V = 30, M = 3, coins[] = {25, 10, 5}
Output: 2
Explanation: Use one 25 cent coin
and one 5 cent coin
Example 2:
Input: V = 11, M = 4,coins[] = {9, 6, 5, 1} 
Output: 2 
Explanation: Use one 6 cent coin
and one 5 cent coin
Answer:
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    int dp[V + 1];
        dp[0] = 0; 
    for (int i = 1; i <= V; i++) {
            dp[i] = INT_MAX; 
    }

    for (int i = 1; i <= V; i++) {
        for (int j = 0; j < M; j++) {
            if (coins[j] <= i) {
                int sub_res = dp[i - coins[j]];
                if (sub_res != INT_MAX && sub_res + 1 < dp[i]) {
                    dp[i] = sub_res + 1;
                }
            }
        }
    }

  
    return (dp[V] == INT_MAX) ? -1 : dp[V];
	} 
	  


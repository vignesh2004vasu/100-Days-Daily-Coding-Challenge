Given an amount and the denominations of coins available, determine how many
ways change can be made for amount. There is a limitless supply of each coin type.
Example
There are 3 ways to make change forn 3: {1, 1, 1}, {1, 2}, and {3}
Function Description
Complete the getWays function in the editor below.
getWays has the following parameter(s):
• int n: the amount to make change for
• int c[m]: the available coin denominations
Returns
• int: the number of ways to make change
Input Format
The first line contains two space-separated integers n and m, where:
n is the amount to change
m is the number of coin types
The second line contains m space-separated integers that describe the values of
each coin type.
Answer:
long getWays(int n, vector<long> c) {

     vector<long> ways(n + 1, 0);
    ways[0] = 1;

  
  for (int coin : c) {
    
    for (int amount = coin; amount <= n; amount++) {
            ways[amount] += ways[amount - coin];
    }
  }


  return ways[n];
  

}

A frog jumps either 1, 2, or 3 steps to go to the top. 
In how many ways can it reach the top of Nth step.
As the answer will be large find the answer modulo 1000000007.
Example 1:
Input:
N = 1
Output: 1
Example 2:

Input:
N = 4
Output: 7
Explanation:Below are the 7 ways to reach
4
1 step + 1 step + 1 step + 1 step
1 step + 2 step + 1 step
2 step + 1 step + 1 step
1 step + 1 step + 2 step
2 step + 2 step
3 step + 1 step
1 step + 3 step

Answer:
class Solution
{
    public:
    const int MOD = 1000000007;
    long long countWays(int N)
    {
        
    vector<long long> dp(N + 1);
    dp[0] = 1; // Base case: 1 way to reach the 0th step

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i - j >= 0) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }

    return dp[N];
        
    }
};

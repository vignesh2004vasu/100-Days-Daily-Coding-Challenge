Given an array Arr of size N containing positive integers. Find the maximum sum of a any possible subsequence such that no two numbers in the subsequence should be adjacent in Arr.

Example 1:

Input:
N = 6
Arr[] = {5, 5, 10, 100, 10, 5}
Output: 110
Explanation: If you take indices 0, 3
and 5, then Arr[0]+Arr[3]+Arr[5] =
5+100+5 = 110.
Example 2:

Input:
N = 4
Arr[] = {3, 2, 7, 10}
Output: 13
Explanation: 3 and 10 forms a non
continuous subsequence with maximum
sum.

Answer:
class Solution{
public:	
	
	int findMaxSum(int *arr, int n) {
	   
          vector<int> dp(n);
        
         
          dp[0] = arr[0];
          dp[1] = max(arr[0], arr[1]);
        
         
          for (int i = 2; i < n; ++i) {
            dp[i] = max(dp[i - 1], arr[i] + dp[i - 2]);
          }
        
        
          return dp[n - 1];
	}
};
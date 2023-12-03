There is a row of N houses, each house can be painted with one of the three colors: red, blue or green. The cost of painting each house with a certain color is different. You have to paint all the houses such that no two adjacent houses have the same color. Find the minimum cost to paint all houses.
The cost of painting each house in red, blue or green colour is given in the array r[], g[] and b[] respectively.
Example 1:

Input:
N = 3
r[] = {1, 1, 1}
g[] = {2, 2, 2}
b[] = {3, 3, 3}
Output: 4
Explanation: We can color the houses  in RGR manner to incur minimum cost.
We could have obtained a cost of 3 if we coloured all houses red, but we 
cannot color adjacent houses with the same color.

Example 2:

Input:
N = 3
r[] = {2, 1, 3}
g[] = {3, 2, 1}
b[] = {1, 3, 2} 
Output: 3
Explanation: We can color the houses
in BRG manner to incur minimum cost.
Answer:
class Solution{   
public:
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        long long int dp[N][3]; 
     
        dp[0][0] = r[0];
        dp[0][1] = g[0];
        dp[0][2] = b[0];
        
        for (int i = 1; i < N; ++i) {
            dp[i][0] = r[i] + min(dp[i - 1][1], dp[i - 1][2]); 
            dp[i][1] = g[i] + min(dp[i - 1][0], dp[i - 1][2]); 
            dp[i][2] = b[i] + min(dp[i - 1][0], dp[i - 1][1]); 
        }
        
       
        return min(dp[N - 1][0],min(dp[N - 1][1], dp[N - 1][2]));
    }
};

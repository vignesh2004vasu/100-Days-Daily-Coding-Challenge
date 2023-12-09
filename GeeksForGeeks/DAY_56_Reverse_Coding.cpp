You will be given an integer n, your task is to return the sum of all natural number less than or equal to n.

As the answer could be very large, return answer modulo 109+7.

Example 1:

Input:
n = 6
Output:
21
Explanation:
1+2+3+4+5+6 = 21
Example 2:

Input:
n = 4
Output:
10
Explanation:
1+2+3+4 = 10

Answer:
class Solution {
  public:
    int sumOfNaturals(int n) {
        const int MOD = 1e9 + 7;
        long long sum = ((long long)n * (n + 1)) / 2; 
        return sum % MOD;
    }
};
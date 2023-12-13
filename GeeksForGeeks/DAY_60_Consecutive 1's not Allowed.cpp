Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s. Output your answer modulo 109 + 7.

Example 1:

Input:
N = 3
Output: 5
Explanation:
5 strings are (000,
001, 010, 100, 101).
Example 2:

Input:
N = 2
Output: 3
Explanation: 
3 strings are (00,01,10).
Answer:
class Solution{
public:
	// #define ll long long
	long long countStrings(int n) {
        const int MOD = 1e9 + 7;
        if (n == 0)
            return 0;
        if (n == 1) 
            return 2;

        long long Zero = 1, One = 1;
        for (int i = 2; i <= n; ++i) {
            long long temp = One;
            One = (Zero + One) % MOD;
            Zero = temp;
        }
        return (Zero + One) % MOD;
    
    }
};
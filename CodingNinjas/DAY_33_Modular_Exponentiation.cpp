You are given a three integers 'X', 'N', and 'M'. Your task is to find A 'N') % 'M'.
A A B is defined as A raised to power B and A % C is the remainder when A is
divided by C.
Sample Input 1 :
2 
3 1 2
4 3 10
Sample Output 1 :
1
4
Explanation for Sample Output 1:
In test case 1, 
X = 3, N = 1, and M = 2 
X ^ N = 3 ^ 1 = 3 
X ^ N % M = 3 % 2 = 1. 
So the answer will be 1.

In test case 2,
X = 4, N = 3, and M = 10 
X ^ N = 4 ^ 3 = 64 
X ^ N % M = 64 % 10 = 4. 
So the answer will be 4.

Answer:
#include <bits/stdc++.h>

int modularExponentiation(int X, int N, int M) {
	if (N == 0) {
        return 1;
    }

    long long result = 1;
    long long base = X % M;

    while (N > 0) {
        if (N % 2 == 1) {
            result = (result * base) % M;
        }
        base = (base * base) % M;
        N /= 2;
    }

    return static_cast<int>((result + M) % M);
}

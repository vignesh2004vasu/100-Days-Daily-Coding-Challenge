Chef has an array consisting of N + K — 1 integers. The array contains only the first N positive odd
numbers. Each number appears exactly once, except for one number which appears exactly K
times. The sum of integers in Chef's array is equal to S.
For example, for N = 3, K = 2, the possible arrays could be [1, 1, 3, 5], [3, 1, 3, 5], [5, 3, 5, 1]. For
N = 1, K = 3, there is only one possible array: [1, 1, 1].
Chef gives you three integers N, K and S and asks you to find the only element which appears K
times in his array.
It is guaranteed that for the given input, there exists a valid array consisting of N + K — 1 elements
with a sum exactly equal to S.
Sample 1:
Input
3
3 2 14
5 4 28
2 3 10
Output
5
1
3
Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,s;cin >>t ;
	while(t--) {
	    cin >> n>> k >> s;
	    cout << (s - (n*n))/(k-1) << endl;
	}
	return 0;
}

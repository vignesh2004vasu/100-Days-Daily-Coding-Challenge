Given an integer N, find a permutation of size N such that:
Ai Ai-I I Ai-2 for all 3 i S N, where I denotes the bitwise or operation.
It is guaranteed that such permutation always exists. If multiple such permutations exist, you may print any.
Note that a permutation of size N consists of all integers from 1 to N exactly once.

Input:
3
3
4
5

Output:
1 3 2
1 2 4 3
2 1 5 3 4

Answer:
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=n;i>=1;i--){
	        cout<<i<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}
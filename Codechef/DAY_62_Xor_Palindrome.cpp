You are given a binary string A of length N.
You can perform the following type of operation on the string A:
• Choose two different indices i and j (1 i, j N);
• Change Ai and Aj to Ai O Ai. Here represents the bitwise XOR operation.
Find the minimum number of operations required to convert the given string into a palindrome.

Input:
4
5
11011
7
0111010
1
1
4
1100
Output:
0
1
0
1
Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
        string s;
        cin>>s;
	    int c=0;
	    for(int i=0;i<n/2;i++){
	        if(s[i]!=s[n-1-i]){
	            c++;
	        }
	    }
	    
	    cout<<(c+1)/2<<endl;
	}
	return 0;
}
Sarthak got an empty magic grid of size N x N on his birthday. The grid can only be filled with positive
integers such that the bitwise XOR of all numbers from any row, any column, or any of the two main
diagonals must all be the same! Can you help Sarthak fill this grid using only positive integers no
more than 109?
Input:
1
3
Output:
1 1 1
1 1 1
1 1 1 
Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t; cin>>t; 
	while(t--)
	{
	    int x=5;
	    long long n; cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cout<<x<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}

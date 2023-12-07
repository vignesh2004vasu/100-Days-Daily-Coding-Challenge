You have N cards placed in front of you on the table. The card has the number Ai written on it.
In one move, you can remove any one card from the remaining cards on the table.
Find the minimum number of moves required so that all the cards remaining on the table have the same
number written on them.
Input:
3
5
1 1 2 2 3
4
8 8 8 8
6
5 6 7 8 9 10
Output:
3
0
5
Answer:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    map<int,int>m;
	    for (int i=0; i<N; i++)
	    {
	        cin>>A[i];
	        m[A[i]]++;    
	    }
	    
	    int freq=0;
	    for(int i=0; i<N; i++)
	    {
	        if(m[A[i]] > freq)
	        freq = m[A[i]];
	    }
	    cout<< (N-freq)<<endl;
	}
	return 0;
}

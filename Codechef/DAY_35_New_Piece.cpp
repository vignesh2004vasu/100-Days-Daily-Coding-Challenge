Chef's favorite game is chess. Today, he invented a new piece and wants to see its strengths.
From a cell (X, Y), the new piece can move to any cell of the chessboard such that its color is different
from that of (X, Y).
The new piece is currently located at cell (A, B). Chef wants to calculate the minimum number of steps
required to move it to (P, Q).
Note: A chessboard is an 8 x 8 square board, where the cell at the intersection of the i-th row and j-th
column is denoted (i, j). Cell (i, j) is colored white if i + j is even and black if i + j is odd.
Sample 1:
Input
3
1188
5758
3333
Output
2
1
Explanation:
Test Case 1: (1, 1) and (8, 8) have the same color, so Chef cannot move the new piece in 1 move. Chef
can first move the piece from (1, 1) to (8, 1) and then from (8, 1) to (8, 8), thus taking 2 moves.
Test Case 2: (5, 7) and (5, 8) have different colors, so Chef can move the piece from (5, 7) to (5, 8) in
1 move.
Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,p,q;
	    cin>>a>>b>>p>>q;
	    if(a==p && b==q)
	        cout<<0<<endl;
	    else if((a+b)%2==(p+q)%2)
	        cout<<2<<endl;
	    else
	        cout<<1<<endl;
	    
	}   
	return 0;
}


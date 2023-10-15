Monk and Inversions
Monk's best friend Micro, who happen to be an awesome programmer, got him an integer matrix M of size for his birthday. 
Monk is taking coding classes from Micro. They have just completed array inversions and Monk was successful in writing a program
to count the number of inversions in an array. Now, Micro has asked Monk to find out the number of inversion in the matrix M.
Number of inversions, in a matrix is defined as the number of unordered pairs of cells {(i,j),(p,q)} such that M[i][j]>M[p][q] & i<=p & j<=q.
Monk is facing a little trouble with this task and since you did not got him any birthday gift, you need to help him with this task.

Sample
Input:
First line consists of a single integer T denoting the number of test cases.
First line of each test case consists of one integer denoting N.
Following N lines consists of N space separated integers denoting the matrix M.
2
3
1 2 3
4 5 6
7 8 9
2
4 3
1 4

Output:
Print the answer to each test case in a new line
0
2


Answer:
#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int m[n][n];
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
				cin>>m[j][k];
		int c=0;

		for(int j=0;j<n;j++)
		{
		
			for(int k=0;k<n;k++)
			{
				for (int x = j; x < n; ++x) {
					for (int y = k; y < n; ++y) {
						if (m[x][y] < m[j][k])
							 c++;
					}
				}

			}
		}
		cout<<c<<endl;
	}
}

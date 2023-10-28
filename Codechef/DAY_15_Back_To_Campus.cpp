Problem
Finally, College has started calling students back to campus. 
There are so many students and thus due to some safety measures the college can’t call back all the students on the same day. 
It currently has the capacity of screening K students on a single day.
There is a total of N students.
What's the minimum number of days required for all the students to be back on the campus?
Input Format
The first line of the input contains a single integer T denoting the number of test cases. 
The description of T test cases follows.
The first and only line of each test case contains two space-separated integers N,K.
Output Format
For each test case, print a single line containing one integer - the minimum number of days required for all the students to be back on the campus.

Input
3
3 3
3 2
4 3
Output
1
2
2
Answer:
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int d;
	    
	    d=(n+k-1)/k;
	    cout<<d<<endl;
	}
	return 0;
}

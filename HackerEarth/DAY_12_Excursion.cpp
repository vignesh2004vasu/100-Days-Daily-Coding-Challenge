Problem
A group of students wants to visit a tour in some city X. In total, the group has N boys and M girls.
To do this, they need to stay in a hotel.Calculate the number of rooms you need to book in the hotel,
if each hotel room has K seats, provided that the boys can not live with the girls in the same room.
Input format
• The first line specifies a number T denoting the
number of test cases.
• In each line of the test case, there are three
numbers, N, M, K.
Output format
For each test case, print one number denoting the
number of rooms to be booked at the hotel.

Sample Input
4
13 7 2
5 5 3
2 2 2
Sample Output
11
4
2
2
Answer:
#include <iostream>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int b,g,r;
		cin>>b>>g>>r;

		int total=0;
		if(b%r==0)
			total+=b/r;
		else if(b%r!=0)
			total+=b/r+1;
		if(g%r==0)
			total+=g/r;
		else if(g%r!=0)
			total+=g/r+1;

		cout<<total<<endl;
		
	}


}

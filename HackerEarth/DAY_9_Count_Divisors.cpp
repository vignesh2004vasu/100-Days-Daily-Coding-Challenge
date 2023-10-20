You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k.
You do not need to print these numbers, you just have to find their count.
Sample Input
1 10 1
Sample Output
10
Answer:
#include <iostream>
using namespace std;
int main() {

	int l,r,n;
	cin>>l>>r>>n;
	int count;
	for(int i=l;i<=r;i++)
	{
			if(i%n==0)
				count++;
	}
	cout<<count;
	

}

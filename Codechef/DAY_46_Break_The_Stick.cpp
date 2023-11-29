Chef has a stick of length N.
He can break the stick into 2 or more parts such that the parity. of length of each part is same. For
example, a stick of length 11 can be broken into three sticks of lengths {3, 3, 5} since each part is odd,
but it cannot be broken into two sticks of lengths {5, 6} since one is even and the other is odd.
Chef can then continue applying this operation on the smaller sticks he obtains, as many times as he
likes.
Can Chef obtain a stick of length exactly X by doing this?
Input:
  3
6 1
3 2
4 3
Output:
YES
NO
YES
Answer:
#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
	while(t--)
	{
	    int n;
	    int k;
	    cin>>n>>k;
	
	if(n%2!=0 && k%2==0)
	    cout<<"NO"<<endl;
	else
	    cout<<"YES"<<endl;

	    
	}
	
}

There are three cities and thus three EVMs. An insider told Chef that his party got A, B, C votes
respectively in these three cities according to the EVMs. Also, the total number of votes cast are
P, Q, R respectively for the three cities.
Chef, being the party leader, can hack at most one EVM so that his party wins. On hacking a particular
EVM all the votes cast in that EVM are counted in favor of Chef's party.
A party must secure strictly more than half of the total number of votes cast in order to be
considered the winner. Can Chef achieve his objective of winning by hacking at most one EVM?
Sample 1:
Input
3
111333
49 1 49 50 100 50
000111
Output
YES
YES
NO
Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double a,b,c,p,q,r;
	    cin>>a>>b>>c>>p>>q>>r;
	    double x=(p+q+r)/2;
	    if(p+b+c>x || a+q+c>x|| a+b+r>x || a+b+c>x )
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}

Alice and Bob are walking on an infinite straight street. Initially, both are at the position X = 0 and they
start walking in the direction of increasing X. After N seconds, they stop. Let's denote Alice's speed and
Bob's speed during the i-th of these seconds by Ai and Bi respectively.
Sometimes, Alice and Bob walk together, i.e. with the same speed side by side. Let's define the weird
distance as the total distance they walk this way. Find this weird distance.
Input:
3
4
1 3 3 4
1 2 4 4
2
2 3
3 2
2
3 3
3 3
Output:
5
0
6
Answer:
#include <iostream>
using namespace std;
#define int long long 
signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int a[x],b[x];
	    for(int i=0;i<x;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<x;i++){
	        cin>>b[i];
	    }
	    int A=0,B=0,ans=0;
	    for(int i=0;i<x;i++){
	        if(a[i]==b[i] and A==B){
	            ans+=a[i];
	        }
	        else{
	            A+=a[i];
	            B+=b[i];
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

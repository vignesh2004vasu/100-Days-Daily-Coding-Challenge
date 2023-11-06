Chef has an array A of length N.
Chef forms a binary array B of length N using the parity of the sums of adjacent elements in A.
Formally,
Bi = (Ai + Ai+1) % 2
BN = (AN + A1) % 2
Here x%y denotes the remainder obtained when x is divided by y.
Chef lost the array A and needs your help. Given array B, determine whether there exits any valid
array A which could have formed B.

Sample 1:
Input
4
2
0 0
2
1 0
4
1 0 1 0
3
1 0 0
Output
YES
NO
YES
NO

Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int count0=0;
	int count1=0;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum=sum+arr[i];
	    }
	    if(sum%2==0)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	
	return 0;
}

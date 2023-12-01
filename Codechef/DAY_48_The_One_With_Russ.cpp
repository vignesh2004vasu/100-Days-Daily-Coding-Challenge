Rachel has a date and tells everyone she is not mad at Ross but doesn't have any feelings for him
anymore either. Seeing her date for the first time, everyone notices that he looks exactly like Ross.
However, Rachel refuses to believe so.
Rachel makes a list of N characteristics and assigns a score to both Ross and Russ for each of the
characteristics. Ross' ith characteristic has a score equal to Ai and Russ' Fh characteristic has a score
equal to Bi. Rachel decides that Russ looks exactly like Ross if the following condition is satisfied for at
least X distinct values of j, 1 j N:
Help Rachel in finding if both are alike.
Input:
  3
4 2 2
1 7 7 5
1 8 1 2
5 1 3
9 8 7 2 5
5 4 1 8 9
3 3 0
2 3 4
2 3 4
Output:
  YES
NO
YES
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,x,k;
	    cin>>n>>x>>k;
	    long long int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    long long int brr[n];
	    for(int i=0;i<n;i++){
	        cin>>brr[i];
	    }
	    long long int count=0;
	    for(int i=0;i<n;i++){
	        long long int z=abs(arr[i]-brr[i]);
	        if(z<=k){
	            count++;
	        }
	    }
	    if(count>=x){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

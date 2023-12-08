You are given a sequence A1, .42, ... , AN. You want all the elements of the sequence to be equal. In orc
to achieve that, you may perform zero or more moves. In each move, you must choose an index i(l i
N), then choose j = i— 1 or j = i + 1 (it is not allowed to choose j = 0 or j = N + 1) and change the
value of Ai to Aj — in other words, you should replace the value of one element of the sequence by one
its adjacent elements.
Input:
3
5
1 1 1 1 1
4
9 8 1 8
2
1 9
Output:
0
2
1
Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count=0,sum=0;
	    for(int i=0;i<n;i++){
	        for(int j=i;j<n;j++){
	            if(a[i]==a[j]) count++;
	        }
	        sum=max(sum,count);
	        count=0;
	    }
	    cout<<n-sum<<endl;
	}
	return 0;
}

Chef has an array A of length N. In one operation, Chef can choose any element Ai and split it into two
positive integers X and Y such that X + Y = Ai.
Note that the length of array increases by 1 after every operation.
Determine the minimum numbers of operations required by Chef to make parity of all the elements
same.
It is guaranteed that parity of all the elements can be made equal after applying the above operation
zero or more times.

Answer:
#include <bits/stdc++.h>

using namespace std;


    
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%2 == 0){
                count++;
            }
        }
        
        if(count == n){
            cout<<0<<endl;
        }else{
           cout<<count<<endl; 
        }
        
        
        
	}
	return 0;
}
There are initially X people in a room.
You are given an array A of length N which describes the following events:
• If Ai 2 0, then Ai people enter the room at i-th minute. For e.g. if A2 = 3, then 3 people enter the room
at the 2-nd minute.
• If Ai < 0, then IAiI people leave the room at i-th minute. Here IAil denotes the absolute value of Ai. For
e.g. if A4 = —2, then 2 people leave the room at the 4-th minute.
Determine the maximum number of people in the room at any moment of time.
It is guaranteed in the input that at any moment of time, the number of people in the room does not
become negative.

Input:
3
5 8
0 3 3 -13 5
4 5
0 -2 2 3
3 5
-2 5 -2
Output:
14
8
8
Answer:
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int maxi=x;
	    int sum=x;
	    
	    for(int i=0;i<n;i++){
	        sum=sum+a[i];
	        maxi=max(sum,maxi);
	        
	        if(sum<0){
	            sum=x;
	        }
	    }
	    
	    cout<<maxi<<endl;
	}
	return 0;
}
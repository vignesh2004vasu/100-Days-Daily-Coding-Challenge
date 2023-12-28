There are N friends numbered 1 to N, seated in a straight line where the seat is taken by friend
numbered Ai.
This Christmas, the friends have decided to distribute candies amongst each other.
For each 1 i < N, the friend at the seat will gift one candy to the friend at the jth seat if:
Input:
3
2
1 2
3
3 1 2
4
2 3 4 1
Output:
0
2
1
Answer:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    
	    int currmax = a[0];
	    int candycount = 0;
	    
	    for(int i = 1;i<n;i++){
	        if(a[i] > currmax){
	            currmax = a[i];
	        }
	        else{
	            candycount++;
	        }
	    }
	    
	    cout << candycount << endl;
	}
    
    return 0;
}
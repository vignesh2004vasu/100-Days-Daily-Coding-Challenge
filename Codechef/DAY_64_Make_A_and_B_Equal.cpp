Chef is given two arrays A and B of length N each.
In one operation Chef can choose one element of A and one element of B and increase them by 1.
More formally: Chef can pick two integers i, j (1 i, j N) and increment Ai and Bj by 1.
Determine the minimum number of operations required to make A and B equal.
Output —1 if it is not possible to make A and B equal.

Input:
3
2
1 2
2 1
3
1 1 2
2 2 1
3
4 6 8
5 7 6
Output:
1
-1
2

Answer:
#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    long int n; cin >> n;
	    long int arr1[n], arr2[n];
	    for(int i = 0; i < n; i++)
	    cin >> arr1[i];
	    
	    long int count1 = 0, count2 = 0;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr2[i];
	        if(arr1[i] > arr2[i])
	        count1 += arr1[i] - arr2[i];
	        
	        else
	        count2 += arr2[i] - arr1[i];
	    }
	    if(count1 == count2) 
	    cout << count1 << endl;
	    
	    else 
	    cout << -1 << endl;
	}
	return 0;
}

Chef has an array A of length N.
Chef wants to append a non-negative integer X to the array A such that the bitwise OR of the entire
array becomes= Y i.e. (A1 | A2 |....| AN | X) = Y. (Here, I denotes the bitwise OR operation)
Determine the minimum possible value of X. If no possible value of X exists, output —1.
Sample 1:
Input:
4
4 15
3 5 6 2
3 8
1 2 1
1 1
0
5 7
1 2 4 2 1
Output:
8
-1
1
0
Test Case 1: (3 | 5 | 6 | 2 | X) = 15 holds for the following values of
X: {8, 9, 10, 11, 12, 13, 14, 15}. The minimum among them is 8.
Test Case 2: It can be proven that no valid value of X exists.
Test Case 3: (0 | X) = 1 holds for only X = 1.
Answer:
#include <iostream>
using namespace std;

int main() {
	int a, b, c, t;
	
	cin >> t;
	while(t--)
	{
	    cin >> a >> b;
	    long arr[a], OR = 0;
	    bool flag = false;
	    
	    for (int i = 0; i < a; i++)
	    {
	        cin >> arr[i];
	        OR = OR |arr[i];
	    }
	    for (int j = 0; j <= b; j++)
	    {
	        if ((OR|j) == b){
	            cout << j << endl;
	            flag = true;
	            break;
	        }
	    }
	    if (!flag){
	        cout << "-1 \n";
	    }
	    
	   // cout << a << "->" << b << endl;
	}
	return 0;
}

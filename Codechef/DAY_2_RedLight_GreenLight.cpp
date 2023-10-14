Problem
“You won’t get caught if you hide behind someone.”
Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot.
Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, 
K. Many players saw this trick and also started hiding behind Ali.
Now, there are N players standing between Gi-Hun and Ali in a straight line, with the i th player having height H i.
Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.
Input Format
The first line of input contains a single integer T,
denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and 
K, denoting the total number of players between Gi-Hun and Ali and the height of both of them respectively.
The second line of each test case contains N space-separated integers, denoting the heights of the players between Gi-Hun and Ali.

Sample :
Input:
3
4 10
2 13 4 16
5 8
9 3 8 8 4
4 6
1 2 3 4

Output:
2
1
0

Answer:
#include <iostream>
using namespace std;

int main() {

        int t;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            int n,k,shot=0;
            cin>>n>>k;
            int arr[n];
            for(int j=0;j<n;j++){
                cin>>arr[j];
                if(arr[j]>k)
                    shot++;
            }
            
            cout<<shot<<endl;
            
        }
	return 0;
}





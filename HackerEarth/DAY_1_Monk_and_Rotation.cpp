Monk and Rotation
Monk loves to preform different operations on arrays, 
and so being the principal of Hackerearth School,
he assigned a task to his new student Mishki. Mishki will be provided with an integer array A of size N and an integer K ,
where she needs to rotate the array in the right direction by K steps and then print the resultant array. As she is new to the school,
please help her to complete the task.

sample:
1
5 2
1 2 3 4 5

output:
4 5 1 2 3

Answer:
  
#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;   
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		int temp[m];
    
        for (int i = 0; i < m; i++) {
        temp[i] = arr[n - m + i];
   			 }
    
    
    for (int i = n - 1; i >= m; i--) {
        arr[i] = arr[i - m];
    }
    
    
    for (int i = 0; i < m; i++) {
        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }


	}	
}

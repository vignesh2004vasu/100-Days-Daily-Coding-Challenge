Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place).
In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....
If there are multiple solutions, find the lexicographically smallest one.
Note:The given array is sorted in ascending order, and you don't need to return anything to make changes in the original array itself.

Example 1:

Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after 
sorting it in wave form are 
2 1 4 3 5.
Example 2:

Input:
n = 6
arr[] = {2,4,7,8,9,10}
Output: 4 2 8 7 10 9
Explanation: Array elements after 
sorting it in wave form are 
4 2 8 7 10 9.
Answer:
#include<bits/stdc++.h>
using namespace std;

    void convertToWave(int n, vector<int>& arr){    
       sort(arr.begin(), arr.end());
      for (int i = 0; i < n - 1; i += 2) {
            swap(arr[i], arr[i + 1]);
    }
    }
};

int main()
{
    int t,n;
    cin>>t; 
    while(t--) 
    {
        cin>>n; 
        vector<int> a(n); 
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        convertToWave(n, a);
       for(int i=0;i<n;i++)
            cout<<a[i]<<" "; 
        cout<<endl;
    }
}
// } Driver Code Ends

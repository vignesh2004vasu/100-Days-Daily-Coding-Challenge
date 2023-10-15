Minimum AND xor OR
Given an array A of N integers. Find out the minimum value of the following expression for all
valid i, j•
(Ai and Ai) cor (Ai or Ai), where i # j.
Video approach to solve this question: here
Input format
• First line: A single integer T denoting the number of test cases
• For each test case:
o First line contains a single integer N, denoting the size of the array.
o Second line contains N space separated integers A1 , A2, ... , An
Output format
For each test case, print a single line containing one integer that represents the minimum
value of the given expression

Sample Input
2
5
1 2 3 4 5
3
2 4 7

Sample Output
1
3


Answer:
#include<bits/stdc++.h>
using namespace std;

int minAndXORor(int arr[],int n) {
    int min_value = INT_MAX;
    

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int result = (arr[i] & arr[j]) ^ (arr[i] | arr[j]);
            min_value = min(min_value, result);
        }
    }

    return min_value;
}

int main() {
    int t; 
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;  
        cin >> n;
        int arr[n];

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

      
        int result = minAndXORor(arr,n);
        cout << result << endl;
    }

    return 0;
}


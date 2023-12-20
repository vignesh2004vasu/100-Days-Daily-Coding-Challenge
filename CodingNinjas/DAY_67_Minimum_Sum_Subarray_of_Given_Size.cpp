You have been given an array 'ARR' of integers consisting of 'Nt integers and a positive integer 'Kt. Your task
is to find a subarray(contiguous) of size 'K' such that the sum of its elements is minimum.

Sample Input 1 :
8 3
10 4 2 5 6 3 8 1
Sample Output 1 :
11
Explanation Of Sample Input
All subarrays of size 3 and their respective sums are-
{10, 4, 1} : sum → 10+4+1 = 15
{4, 2, 5} : sum → 4+2+5 = 11
{2, 5, 6} : sum → 2+5+6 = 13
{5, 6, 3} : sum → 5+6+3 = 14
{6, 3, 8} : sum → 6+3+8 = 17
{3, 8, 1} : sum → 3+8+1 = 12

The subarray with a minimum sum of 11 is {4, 2, 5}.
Sample Input 2 :
8 4
1 -4 2 10 -2 3 1 0 -20
Sample Output 2 :
2

Answer:
#include <bits/stdc++.h> 
int minSubarraySum(int arr[], int n, int k) 
{
      int minSum = INT_MAX;
    int currentSum = 0;
   
    for (int i = 0; i < k; ++i) {
        currentSum += arr[i];
    }
    
    minSum = min(minSum, currentSum);
    
    
    for (int i = k; i < n; ++i) {
        currentSum += arr[i] - arr[i - k];
        minSum = min(minSum, currentSum);
    }
    
    return minSum;
}

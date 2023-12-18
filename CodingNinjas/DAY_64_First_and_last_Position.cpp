ou have been given a sorted array/list 'arr'consisting of 'n'elements. You are also given an integer 'k'.
ow, your task is to find the first and last occurrence of 'k' in 'arr'.
Sample Input 1:
8 2
0 0 1 1 2 2 2 2


Sample output 1:
4 7


Explanation of Sample output 1:
For this testcase the first occurrence of 2 in at index 4 and last occurrence is at index 7.


Sample Input 2:
4 2
1 3 3 5


Sample output 2:
-1 -1

Answer:
#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int low = 0;
  int high = n - 1;
  int firstOccurrence = -1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == k) {
      firstOccurrence = mid;
      high = mid - 1; 
    } else if (arr[mid] < k) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  
  if (firstOccurrence == -1) {
    return {-1, -1};
  }

  
  low = firstOccurrence;
  high = n - 1;
  int lastOccurrence = firstOccurrence;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == k) {
      lastOccurrence = mid;
      low = mid + 1; 
    } else if (arr[mid] < k) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return {firstOccurrence, lastOccurrence};
}
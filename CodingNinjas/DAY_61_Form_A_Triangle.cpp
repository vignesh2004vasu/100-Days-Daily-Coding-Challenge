You are given an integer of array/list 'ARRI of length 'N. You are supposed to return true if it is possible to
construct at least one non-degenerate triangle using values of array/list as sides of the triangle, otherwise,
return false.
Sample Input 1 :
2
5
4 2 1 3 2
5
5 2 7 3 15
Sample Output 1:
YES
YES
Explanation of Sample Input 1:
In the first test case, if we choose the sides as { 2,3,4} or {2,2,1} or {2,2,3} then it is possible to form a non-degenerate triangle.

In the second test case, if we choose sides as {5,3,7}, then it is possible to form a non-degenerate triangle.

Answer:
#include <bits/stdc++.h> 
bool possibleToMakeTriangle(vector<int> &arr)
{
    int n = arr.size();
    if (n < 3)
         return false;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; ++i) {
        if (arr[i] + arr[i + 1] > arr[i + 2]) {
            return true; 
        }
    }

    return false;
}
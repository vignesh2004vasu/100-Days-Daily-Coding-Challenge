You are given an array arr of length N. You have to return a list of
integers containing the NGE(next greater element) of each
element of the given array. The NGE for an element X is the first
greater element on the right side of X in the array. Elements for
which no greater element exists, consider the NGE as -1.
For Example :
If the given array is [1, 3, 2], then you need to
return [3,-1,-1]. Because for 1, 3 is the next,
greater element, for 3 it does not have any greater
number to its right, and similarly for 2.

Answer:
#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    
   vector<int> result(n, -1);
   stack<int> st;
   for (int i = 0; i < n; ++i) {
     while (!st.empty() && arr[i] > arr[st.top()]) {
       result[st.top()] = arr[i];
       st.pop();
     }
     st.push(i);
   }
   return result;
}

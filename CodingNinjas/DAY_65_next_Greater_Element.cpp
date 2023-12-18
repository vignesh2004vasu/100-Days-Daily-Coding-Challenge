You are given an array 'a'of size 'n'.
Print the Next Greater Element(NGE) for every element.
The Next Greater Element for an element 'x' is the first element on the right side of 'x' in the array, which is
greater than 'x'.
If no greater elements exist to the right of 'x', consider the next greater element as -1.
Sample Input 1:
5
1 5 3 4 2


Sample Output 1:
5 -1 4 -1 -1


Sample Input 2:
5
5 5 5 5 5


Sample Output 2:
-1 -1 -1 -1 -1

Answer:

#include <bits/stdc++.h>
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
    vector<int> result(n, -1);
    stack<int> s;

    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && arr[i] > arr[s.top()])
        {
            result[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    return result;
}
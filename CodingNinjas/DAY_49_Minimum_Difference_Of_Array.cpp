Given an array of integers, print the minimum of the absolute difference of all
possible pairs of elements.
Example :
ARR [3, -6, 7, -7, 0]
Out of all pairs, (-7,-6) have a difference of • 1 t, and no other pair has less
difference. So 'ANS' IS 1;
Sample Input 1 :
2
4
1 8 3 10   
2
5 5
Sample Output 1 :
2
0
Explanation Of Sample Input 1 :
For test case 1, 
Out of all pairs (1,3) and (8,10) have the minimum difference ‘2’ so the answer is ‘2’.
For test case 2,
There is only one possible pair (5,5) so the answer is ‘0’.
Sample Input 2 :
2
3
8 1 8
2
-3 3
Sample Output 2 :
0
6

  #include <bits/stdc++.h> 
int minDiff(int n, vector < int > arr) {
   sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;

    for (size_t i = 0; i < arr.size() - 1; ++i) {
        int diff = abs(arr[i] - arr[i + 1]);
       
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    return minDiff;
}

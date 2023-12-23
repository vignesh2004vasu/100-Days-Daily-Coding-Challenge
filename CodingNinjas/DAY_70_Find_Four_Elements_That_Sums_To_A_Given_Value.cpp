You are given an array/list 'ARR' of 'N' integers and an integer value 'TARGET'. You need to check whether there exist four numbers (ARR[i],
ARROI, ARR(k], ARR(I]) such that (0 i < j < k < I < N) and ARR[i] + ARRLi] + ARR[kl + ARR[II 'TARGET.
Sample Input 1:
2
5 9
1 3 3 10 2
6 20
2 4 6 3 1 1
Sample Output 1:
Yes
No
Explanation For Sample Input 1:
Test case 1:
The elements at indices (0, 1, 2, 4) gives sum 9 i.e, ARR[0] + ARR[1] + ARR[2] + ARR[4] = 9. Hence the answer is Yes.

Test case 2:
None of the combinations of 4 numbers gives 20 as 'TARGET'. Hence the answer is No.  
Sample Input 2:
2
5 15
0 10 1 2 2
6 20
-2 12 -1 1 20 1 
Sample Output 2:
Yes
Yes

Answer:
#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
     sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 3; ++i) {
        for (int j = i + 1; j < n - 2; ++j) {
            int left = j + 1, right = n - 1;
            while (left < right) {
                int sum = arr[i] + arr[j] + arr[left] + arr[right];
                if (sum == target) {
                    return "Yes";
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    return "No";
}


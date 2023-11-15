You are given an array/list of 'N' integers. You are supposed to return the
maximum sum of the subsequence with the constraint that no two elements are
adjacent in the given array/list.
Sample Input 1:
2
3
1 2 4
4
2 1 4 9
Sample Output 1:
5
11
Explanation to Sample Output 1:
In test case 1, the sum of 'ARR[0]' & 'ARR[2]' is 5 which is greater than 'ARR[1]' which is 2 so the answer is 5.
In test case 2, the sum of 'ARR[0]' and 'ARR[2]' is 6, the sum of 'ARR[1]' and 'ARR[3]' is 10, and the sum of 'ARR[0]' and 'ARR[3]' is 11.
So if we take the sum of 'ARR[0]' and 'ARR[3]', it will give the maximum sum of sequence in which no elements are adjacent in the given array/list.
Answer:
#include <bits/stdc++.h> 
using namespace std;
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();

    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return nums[0];
    }

    vector<int> dp(n, 0);

    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    }

    return dp[n - 1];
    
}

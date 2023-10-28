Given an array of integers and a positive integer k, determine the number of (i, j)
pairs wherei < j and ar[i] + ar[j] is divisible by k.
Example:
ar=[1,2,3,4,5,6]
k=5
Three pairs meet the criteria: [1, 4] , [2, 3], and [4, 6]
There for ans = 3;
Sample Input

STDIN           Function
-----           --------
6 3             n = 6, k = 3
1 3 2 6 1 2     ar = [1, 3, 2, 6, 1, 2]
Sample Output
 5
Answer:
#include <bits/stdc++.h>
using namespace std;

int subset(int n, int ar[], int k) {
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((ar[i] + ar[j]) % k == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << subset(n, arr, k);
    return 0;
}

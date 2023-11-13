Given an array/list of length 'n', where the array/list represents the boards and each element of the given array/list represents the length of each board. Some
'k'numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.
You are supposed to return the area of the minimum time to get this job done of painting all the 'n' boards under a constraint that any painter will only paint the
continuous sections of boards.
Example :
Input: arr =
Output: 11
Explanation :
First painter can paint boards 1 to 3 in 8 units of time and the
second painter can paint boards 4-6 in 11 units of time. Thus both
painters will paint all the boards in max(8,11)
11 units of time.
It can be shown that all the boards can 't be painted in less than
11 units of time.
Sample Input 1 :
4 2
10 20 30 40
Sample Output 1 :
60
Explanation For Sample Input 1 :
In this test case, we can divide the first 3 boards for one painter and the last board for the second painter.

Sample Input 2 :
2 2
48 90
Sample Output 2 :
90
Answer:
#include<bits/stdc++.h>
bool isPossibleToPaint(vector<int> &boards, int painters, int distance) {
    int totalPainters = 1;
    int currentDistance = 0;

    for (int board : boards) {
        currentDistance += board;

        if (currentDistance > distance) {
            totalPainters++;
            currentDistance = board;
        }
    }

    return totalPainters <= painters;
}

int findLargestMinDistance(vector<int> &boards, int k) {
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (isPossibleToPaint(boards, k, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

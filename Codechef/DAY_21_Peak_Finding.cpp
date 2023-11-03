Well known investigative reporter Kim "Sherlock" Bumjun needs your help! Today, his mission is to
sabotage the operations of the evil JSA. If the JSA is allowed to succeed, they will use the combined
power of the WQS binary search and the UFDS to take over the world!
But Kim doesn't know where the base is located. He knows that the base is on the highest peak of the
Himalayan Mountains. He also knows the heights of each of the N mountains. Can you help Kim find
the height of the mountain where the base is located?
Input:
• First line will contain T, number of testcases. Then the testcases follow.
• The first line in each testcase contains one integer, N.
• The following N lines ofeach test case each contain one integer: the height ofa new mountain.
Output:
For each testcase, output one line with one integer: the height of the tallest mountain for that test case.

ANSWER:
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int max_height = 0;

        for (int i = 0; i < N; i++) {
            int height;
            cin >> height;
            max_height = max(max_height, height);
        }

        cout << max_height << endl;
    }

    return 0;
}

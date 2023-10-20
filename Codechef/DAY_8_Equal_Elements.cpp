Problem
You are given an array A of size N. In one operation, you can do the following:
• Select indices i and j (i != j) and set Ai = Aj.
Find the minimum number of operations required to make all elements of the array equal.
Input Format
• The first line of input will contain a single integer T, denoting the number of test cases.
• Each test case consists of multiple lines of input.
o The first line of each test case contains an integer N — the size of the array.
o The next line contains N space-separated integers, denoting the array A.
Output Format
For each test case, output on a new line, the minimum number of operations required to make all
elements of the array equal.
Sample 1:
Input
3
3
1 2 3
4
2 2 3 1
4
3 1 2 4
Output
2
2
3
Answer:
#include <iostream>
#include <vector>

int main() {
    int t;
    cin>>t; 

    while (t--) {
        int n;
        cin>>n;

        vector<int> counts(100001, 0); 
        int maxCount = 0;

        for (int i = 0; i < n; ++i) {
            int num;
            cin>>num;
            counts[num]++;
            maxCount = max(maxCount, counts[num]);
        }

        int operations = n - maxCount;
        cout <<operations<<endl;
    }

    return 0;
}

  

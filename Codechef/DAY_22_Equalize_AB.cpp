You are given two numbers A and B along with an integer X. In one operation you can do one of the
following:
• Set A = A + X and B = B - X
• Set B = A - X and B = B + X
Determine if you can make A and B equal after applying the operation any number of times (possibly
zero).
Sample 1:
Input
4
5 7 1
3 4 2
4 4 6
2 5 3
Output
YES
NO
YES
NO
Answer:
#include<bits/stdc++.h>
using namespace std;

string canBeEqual(int A, int B, int X) {
    int diff = abs(A - B);
    if (diff % 2 != 0) {
        return "NO";
    } 
    else {
        diff=diff/2;
        
        if(diff%X==0)
            return "YES";
        else
            return "NO";
    }
}

int main() {
    int T;
    cin >> T; 

    for (int t = 0; t < T; t++) {
        int A, B, X;
        cin >> A >> B >> X;
        string result = canBeEqual(A, B, X);
        cout << result << endl;
    }

    return 0;
}

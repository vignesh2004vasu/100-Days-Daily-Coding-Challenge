There are 3 hidden numbers A, B, C.
You somehow found out the values ofmin(A, B), min(B, C), and min(C, A).
Determine whether there exists any tuple (A, B, C) that satisfies the given values of
min(A, B), min(B, C), min(C, A).
Sample 1:
Input
3
555
234
224
Output
YES
NO
YES
Explanation:
Test case 1: One valid tuple (A, B, C) is (5, 5, 5).
Test case 2: It can be shown that there is no valid tuple (A, B, C).
Test case 3: One valid tuple (A, B, C) is (4, 2, 5).
Answer:
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int ab, bc, ca;
        cin >> ab >> bc >> ca;
        
        if (min(ab, bc) == min(bc, ca) && min(ab, bc) == min(ab, ca)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

You are choreographing a circus show with various animals. For one act, you are
given two kangaroos on a number line ready to jump in the positive direction (i.e,toward positive infinity).
• The first kangaroo starts at location $1 and moves at a rate of VI meters per jump.
• The second kangaroo starts at location a2 and moves at a rate of v2 meters per jump.
You have to figure out a way to get both kangaroos at the same location at the same
time as part of the show. If it is possible, return YES, otherwise return NO.

Example
x1=2,v1=1,x2=1,v2=2
After one jump, they are both at X=3(x1+v1=2+1=3 , x2+v2=1+2=3)
so the answer is YES.

Answer:
#include <iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) {
        if (x1 == x2) {
            return "YES";
        } else {
            return "NO";
        }
    }
    
    if ((x2 - x1) % (v1 - v2) == 0 && (x2 - x1) / (v1 - v2) >= 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    
    return 0;
}


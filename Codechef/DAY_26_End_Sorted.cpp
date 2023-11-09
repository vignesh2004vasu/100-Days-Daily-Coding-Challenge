Chef considers a permutation P of {1, 2, 3, ... ,N} End sorted if and only if P1 = 1 and PN = N.
Chef is given a permutation P.
In one operation Chef can choose any index i (1 i S N — 1) and swap Pi and Pi+l. Determine the
minimum number of operations required by Chef to make the permutation P End sorted.
Note: An array P is said to be a permutation of {1, 2, 3, ... , N} if P contains each element of
{1, 2, 3, , N} exactly once.
Sample 1:
Input
4
4
1324
3
321
2
21
3
213
Output
3
1
1
Explanation:
Test case 1: P is already End sorted.
Test case 2: P can be made End sorted using 3 operations as follows: [3, 2, 1] [2, 3, 1] [2, 1, 3] —+
[1, 2, 3]. It can be shown that achieving this in fewer than 3 moves is impossible.
Test case 3: P can be made End sorted using one operation, by swapping 1 and 2.
Test case 4: P can be made End sorted using one operation, by swapping 1 and 2.

Answer:
#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t,n,a,b,num;
    for(cin>>t;t--;){
        cin>>n;
        for(int i=0;i<n;++i){
            cin>>num;
            if(num == 1) a = i;
            else if(num == n) b = i;
        }
        cout << a + (n-b-1) - (b<a) << endl;
    }
    return 0;
}


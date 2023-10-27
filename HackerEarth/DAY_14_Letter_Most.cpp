Lonely Y loves his string s of lowercase letters, Y is about to escape so he should choose
just one lowercase letter c and carry all letters in s which is equal to c with himself.
What is the maximum number of letters Y can carry with himself?
Input
First line contains only n, length of string s.
Second line contains string s of lowercase letters.
Output
The only line of output contains an integer which is maximum number of letters that Y can carry.
Sample Input
7
vrowrqt
Sample Output
2

Answer:
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    int maxCount = 0;

    for (char c = 'a'; c <= 'z'; c++) {
        int countchar = count(s.begin(), s.end(), c);
        maxCount = max(maxCount, countchar);
    }

    cout<<maxCount<<endl;

    return 0;
}

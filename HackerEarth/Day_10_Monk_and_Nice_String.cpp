Monk's best friend Micro's birthday is coming up. Micro likes Nice Strings very much, so Monk
decided to gift him one. Monk is having N nice strings, so he'll choose one from those. But
before he selects one, he need to know the Niceness value of all of those. Strings are arranged
in an array A, and the Niceness value of string at position i is defined as the number of strings
having position less than i which are lexicographicaly smaller than A[i]. Since nowadays, Monk
is very busy with the Code Monk Series, he asked for your help.
Note: Array's index starts from 1.
Video approach to solve this question: here
Input:
First line consists of a single integer denoting N.
N lines follow each containing a string made of lower case English alphabets.
Sample Input
4
a
c
d
b
Sample Output
0
1
2
1



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> strings(n);
    vector<int> niceness(n, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
        for (int j = 0; j < i; ++j) {
            if (strings[j] < strings[i]) {
                niceness[i]++;
            }
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << niceness[i] << endl;
    }
    
    return 0;
}

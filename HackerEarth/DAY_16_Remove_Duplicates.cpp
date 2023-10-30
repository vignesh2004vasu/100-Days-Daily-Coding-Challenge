Given a string S. Your task is to remove all duplicates characters from the string S

NOTE:
1.) Order of characters in output string should be same as given in input string.
2.) String S contains only lowercase characters ['a'-'z'].

input:
Input contain a single string S.

Output:
Print the string S with no any duplicate characters.
Sample Input
iloveprogramming

Sample Output
iloveprgamn

Answer:
#include<bits/stdc++.h>
using namespace std;


int main() {
    string S;
    cin >> S;

    string result = "";

    for (char c : S) {
        bool isDuplicate = false;
        for (char d : result) {
            if (c == d) {
                isDuplicate = true;
                break;
            }
        }
        
        if (!isDuplicate) {
            result += c;
        }
    }

    cout<<result<<endl;

    return 0;
}


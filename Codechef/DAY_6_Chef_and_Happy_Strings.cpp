Problem
Chef has a string S with him. Chef is happy
if the string contains a contiguous substring of length 
strictly greater than 2in which all its characters are vowels.
Determine whether Chef is happy or not.
Note that, in english alphabet, vowels are a, e, i, o, and u.
  
Input Format:
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, a string S.
  
Output Format:
For each test case, if Chef is happy, print HAPPY else print SAD.
You may print each character of the string in uppercase or lowercase (for example, the strings hAppY, Happy, haPpY, and HAPPY will all be treated as identical).

Input:
4
aeiou
abxy
aebcdefghij
abcdeeafg

Output:
Happy
Sad
Sad
Happy

Answer:
#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

bool isHappy(string s) {
    int n = s.length();
    for (int i = 0; i < n - 2; i++) {
              if (isVowel(s[i]) && isVowel(s[i + 1]) && isVowel(s[i + 2])) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string S;
        cin >> S;
        
        if (isHappy(S)) {
            cout << "Happy" << endl;
        } else {
            cout << "Sad" << endl;
        }
    }
    
    return 0;
}

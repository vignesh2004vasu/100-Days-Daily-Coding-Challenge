Problem
Arpasland has surrounded by attackers. A truck enters the city. 
The driver claims the load is food and medicine from Iranians.
Ali is one of the soldiers in Arpasland. He doubts about the truck, maybe it's from the siege. 
He knows that a tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel.
Determine if the tag of the truck is valid or not.
We consider the letters "A","E","I","O","U","Y" to be vowels for this problem.
Input Format
The first line contains a string of length 9. The format is "DDXDDD-DD", where D stands for a digit (non zero) and X is an uppercase english letter.
Output Format

Print "valid" (without quotes) if the tag is valid, print "invalid" otherwise (without quotes)

Sample Input
12X345-67
Sample Output
invalid
Explaination:
The tag is invalid because the sum of first and second digit of it is odd 
(also the sum of 4'th and 5'th, 5'th and 6'th and 8'th and 9'th are odd).

Answer:
#include<bits.stdc++.h>

using namespace std;

bool isVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');
}

bool isValidTag(string tag) {
    if (tag.length() != 9 || tag[2] != '-' || tag[5] != '-') {
        return false;
    }

    for (int i = 0; i < 9; i++) {
        if (i != 2 && i != 5) {
            if (!isdigit(tag[i])) {
                return false;
            }
        }
    }

    if (isVowel(tag[2])) {
        return false;
    }

    for (int i = 0; i < 6; i += 2) {
        int sum = (tag[i] - '0') + (tag[i + 1] - '0');
        if (sum % 2 != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string tag;
    cin >> tag;

    if (isValidTag(tag)) {
        cout << "valid" << endl;
    } else {
        cout << "invalid" << endl;
    }

    return 0;
}

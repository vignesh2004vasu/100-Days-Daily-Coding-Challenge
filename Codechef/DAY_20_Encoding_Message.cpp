Chef recently graduated Computer Science in university, so he was looking for a job. He applied for
several job offers, but he eventually settled for a software engineering job at ShareChat. Chef was very
enthusiastic about his new job and the first mission assigned to him was to implement a message
encoding feature to ensure the chat is private and secure.
Chef has a message, which is a string S with length N containing only lowercase English letters. It
should be encoded in two steps as follows:
• Swap the first and second character of the string S, then swap the 3rd and 4th character, then the
5th and 6th character and so on. Ifthe length of S is odd, the last character should not be swapped
with any other.
• Replace each occurrence of the letter 'a' in the message obtained after the first step by the letter 'z',
each occurrence of 'b' by Y', each occurrence of 'c' by 'x', etc, and each occurrence of 'z' in the
message obtained after the first step by 'a'.
The string produced in the second step is the encoded message. Help Chef and find this message.

Sample 1:
Input
2
9
sharechat
4
chef
Output
shizxvzsg
sxuv
Explanation:
Example case 1: The original message is "sharechat". In the first step, we swap four pairs of letters (note that the last letter is not swapped),
so it becomes "hsraceaht".In the second step, we replace the first letter ('h') by 's', the second letter ('s') by 'h', and so on, so the resulting encoded message is "shizxvzsg".

Answer:
#include <iostream>
#include <string>
using namespace std;

string encodeMessage(string s) {

    for (int i = 0; i < s.length() - 1; i += 2) {
        swap(s[i], s[i + 1]);
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            s[i] = 'z';
        } else {
            s[i] = 'a' + ('z' - s[i]);
        }
    }

    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string message;
        cin >> message;

        string encodedMessage = encodeMessage(message);
        cout << encodedMessage << endl;
    }

    return 0;
}

Your laptop keyboard is faulty, and whenever you type a character 'i' on it, it reverses the string that you have written.
Typing other characters works as expected.You are given a 0-indexed string s, and you type each character of s using your faulty keyboard.
Return the final string that will be present on your laptop screen.

Example 1:

Input: s = "string"
Output: "rtsng"
Explanation: 
After typing first character, the text on the screen is "s".
After the second character, the text is "st". 
After the third character, the text is "str".
Since the fourth character is an 'i', the text gets reversed and becomes "rts".
After the fifth character, the text is "rtsn". 
After the sixth character, the text is "rtsng". 
Therefore, we return "rtsng".
Answer:
#include <string.h>
class Solution {
public:
    string finalString(string s) {
        string result;
        bool rev = false;

    for (char c : s) {
        if (c == 'i') {
            rev = !rev;
        } 
        else {
            if (rev) {
                result = c + result;  
            } 
            else {
                result += c;
            }
        }
    }

    if (rev) {
        reverse(result.begin(), result.end()); 
    }

    return result;
    }

};

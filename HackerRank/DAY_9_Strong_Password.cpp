Louise joined a social networking site to stay in touch with her friends.
The signup page required her to input a name and a password.
  However, the password must be strong. 
  The website considers a password to be strong if it satisfies the following criteria:

Its length is at least .
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+
She typed a random string of length N  in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

Note: Here's the set of types of characters in a form you can paste in your solution:

numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"

Answer:
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string password;
    cin >> n >> password;

    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";

    bool has_number = false;
    bool has_lower_case = false;
    bool has_upper_case = false;
    bool has_special_character = false;

    for (char c : password) {
        if (numbers.find(c) != string::npos) {
            has_number = true;
        } else if (lower_case.find(c) != string::npos) {
            has_lower_case = true;
        } else if (upper_case.find(c) != string::npos) {
            has_upper_case = true;
        } else if (special_characters.find(c) != string::npos) {
            has_special_character = true;
        }
    }

    int characters_needed = 0;

    if (!has_number) {
        characters_needed++;
    }
    if (!has_lower_case) {
        characters_needed++;
    }
    if (!has_upper_case) {
        characters_needed++;
    }
    if (!has_special_character) {
        characters_needed++;
    }

    if (n < 6) {
        cout << max(6 - n, characters_needed) << endl;
    } else {
        cout << characters_needed << endl;
    }

    return 0;
}

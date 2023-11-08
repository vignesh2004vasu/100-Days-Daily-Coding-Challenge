Write a program that takes a character as input and prints either 1, O, or -1
according to the following rules.
1, if the character is an uppercase alphabet 
0, if the character is a lowercase alphabet 
-1, if the character is not an alphabet

Answer:
#include <iostream>
using namespace std;

int main() {
    char c;

  cin >> c;

  if (isupper(c)) {
    cout << 1 << endl;
  } else if (islower(c)) {
    cout << 0 << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;

    return 0;
}

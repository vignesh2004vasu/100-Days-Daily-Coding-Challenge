Monk and Suffix Sort
Monk loves to play games. On his birthday, his friend gifted him a string S. Monk and his
friend started playing a new game called as Suffix Game. In Suffix Game, Monk's friend will ask
him lexicographically kth smallest suffix of the string S. Monk wants to eat the cake first so he
asked you to play the game.

Sample Input
aacb 3
Sample Output
b
Explanation:
All the suffices of the string are:
aacb
acb
cb
b
After sorting the order of the suffices will be:
aacb
acb
b
cb
3rd smallest suffix will be b.
Answer:
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    int n = s.length();
    vector<string> suffixes;

    for (int i = 0; i < n; i++)
	  {
        suffixes.push_back(s.substr(i));
    }
    sort(suffixes.begin(), suffixes.end());
    cout << suffixes[k - 1] << endl;

    return 0;
}

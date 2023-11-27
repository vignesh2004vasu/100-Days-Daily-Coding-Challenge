Today, Chef decided to cook some delicious meals from the ingredients in his kitchen. There are N
ingredients, represented by strings Sl, S2, ... , SN. Chef took all the ingredients, put them into a
cauldron and mixed them up.
In the cauldron, the letters of the strings representing the ingredients completely mixed, so each letter
appears in the cauldron as many times as it appeared in all the strings in total; now, any number of
times, Chef can take one letter out of the cauldron (if this letter appears in the cauldron multiple times,
it can be taken out that many times) and use it in a meal. A complete meal is the string "codechef'. Help
Chef find the maximum number of complete meals he can make!
Input:
3
6
cplusplus
oscar
deck
fee
hat
near
5
code
hacker
chef
chaby
dumbofe
5
codechef
chefcode
fehcedoc
cceeohfd
codechef

Output:
1
2
5
Answer:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    unordered_map<char, int> um;
	    for (int i = 0; i < n; ++i) {
	        string s;
	        cin >> s;
	        for (char j: s) {
	            um[j]++;
	        }
	    }
	    cout << min({um['c'] / 2, um['o'], um['d'], um['e'] / 2, um['h'], um['f']}) << endl;
	}
	return 0;
}

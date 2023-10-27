Problem Statement
There are given two strings S and T consisting of lowercase English letters, both of same
length. Let's say length of both strings is N.
Is it possible to make both strings equal by doing following changes any number of times :
• Choose any index i(0 i < n) and swap Si and Ti
• Choose any index i(0 i < n) and swap Si and Sn-i-1
• Choose any index i(0 i < n) and swap Ti and Tn-i-1
  
Sample Input
pcabb
bbacp
Sample Output
YES

Answer:

#include<bits/stdc++.h>
using namespace std;

bool make_equal (string T, string S) {

   vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);

    for (char c : T) {
        freq1[c - 'a']++;
    }

    for (char c : S) {
        freq2[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq1[i] % 2 != freq2[i] % 2) {
            return false;
        }
    }

    return true;

   
}

int main() {

    string T,S;
    cin>>T>>S;
    if(make_equal(T,S))
        cout<<"YES";
    else
        cout<<"NO";

   
}

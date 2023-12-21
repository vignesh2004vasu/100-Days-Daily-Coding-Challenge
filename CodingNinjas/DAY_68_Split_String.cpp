You are given a string 'str' of even length. Your task is to find out if we divide the 'str' from the middle, will
both the substrings contain an equal number of vowels or not.
For Example:
You are given, 'str'= 'codingninjas', when we split this string we get, 'coding' and 'ninjas' which both contain 2
vowels each. Hence the answer is 'True'.

Answer:
#include <bits/stdc++.h> 

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool splitString(const string &str) {
    int length = str.length();
    int mid = length / 2;
    int fh = 0, sh = 0;

    for (int i = 0; i < mid; ++i) {
        if (isVowel(str[i])) {
            fh++;
        }
    }

    for (int i = mid; i < length; ++i) {
        if (isVowel(str[i])) {
            sh++;
        }
    }


    return  fh == sh;
}
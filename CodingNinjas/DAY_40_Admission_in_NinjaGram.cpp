Ninja is shifting to a new place named NinjaGram. To take admission to the new school, the teacher gives him
a sentence and asks him to check whether the sentence is a pangram.
A word or a sentence is called a pangram if it contains all the English alphabet letters.
Since Ninja is new to programming, he doesn't have much experience; he asks you to solve the problem. Can
you help Ninja figure out whether the sentence is a pangram?
Sample Input 1:
2
12
toosmallword
35
TheQuickBrownFoxJumpsOverTheLazyDog
Sample Output 1:
NO
YES
Explanation For Sample Input 1:
In the first test case, the given string is “toosmallword” which contains the characters [‘t’,’o’,’s’,’m’,’a’,’l’,’w’,’r’,’d’], which doesn’t contain all the 26 alphabetic characters. Hence the answer is “NO”.
In the second test case, the given string is “TheQuickBrownFoxJumpsOverTheLazyDog” which contains the characters: [‘t’,’h’,’e’,’q’,’u’,’i’,’c’,’k’,’b’,’r’,’o’,’w’,’n’,’f’,’x’,’j’,’m’,’p,’’s’,’v’,’l,’a’,’z’,’y’,’ d’,’g’], which contains all the 26 alphabetic characters. Hence the answer is “YES”.
Answer:
#include <bits/stdc++.h> 
bool ninjaGram(string &str)
{
    set<char> letters;

    for(char c : str)
    {
        if(isalpha(c))
        {
            letters.insert(tolower(c));
        }
    }

    return letters.size()==26;
}

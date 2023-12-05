Dr. Doofenshmirtz is trying to make another big mischief. To prevent this, Major
Francis Monogram wants to send mail to Perry the Platypus to inform him about
the mischief. He just needs to send a secret message 's' to perry. He has a
special keyboard "keyboard" in which all the letters are in a straight line but
jumbled. The time taken to move his finger from index 'i' to index 'j' is Ij - il. He
wants to know how much time will it take to send the secret message to Perry.
Note :
Initially, he is at the first letter of the keyboard.
All letters are in lower-case English letters.
For Example :
Let s "perry", keyboard "qwertyuiopasdfghjklzxcvbnnü
Now In this example, Francis will start from the first index and go to •p', which
will take 9 seconds, now from 'p' to the distance is of 7 indexes, from 'e' to 'r'
the distance is 1, from 'r' to 'r' it will be zero, and from 'r' to 'y' the distance will
be 2. Hence the total time taken is 9 + 7+ 1 + O +2 19.
Hence the answer is 19.

Answer:
#include<bits/stdc++.h>
int timeTakenToMail(string keyboard, string s) {
    
    unordered_map<char, int> keyboardMap;
    
    for (int i = 0; i < keyboard.size(); ++i) {
        keyboardMap[keyboard[i]] = i;
    }

    int time = 0;
    int currentPos = 0; 

    for (char c : s) {
        int newPos = keyboardMap[c]; 
        time += abs(newPos - currentPos); 
        currentPos = newPos; 
    }

    return time;
}

Bob is a student and learned about alphabets and prime numbers today. He still sometimes gets confused between normal numbers and prime numbers.
So his teacher thought of giving him a fun game that can help him to get confident in this topic.
The game was, there is string 'STR' of length 'N' which includes alphabets and digits.
There is also a special character The game was to replace every prime number that occurred in the string 'STR' with 'K'.
Bob has solved the task and finished the game, but he still has doubt that the final string he got after the replacement is correct. 
So being his friend he asked you to help him with it.So your task is to play the same game and return the correct final string after replacement.
Sample Input 1 :
2
3 ?
1a2
6 %
Ax1yB3
Sample Output 1 :
1a?
Ax1yB%
Explanation Of Sample Input 1 :
For the first test case, the numbers are at the ‘1st’ and ‘3rd’ positions. But only ‘2’ is prime. Hence the final string after the replacement is “1a?”.
Hence, the output will be: 1a?
For the second test case, the numbers are at the ‘3rd’ and ‘6th’ positions respectively.  But only ‘3’ is prime. Hence the final string after the replacement is “Ax1yB%”.
Hence, the output will be: Ax1yB%
  
Answer:
#include <bits/stdc++.h> 
bool isPrime(int num) {
    if(num<=1)
        return false;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
            return false;
    }

    return true;
}
string kReplacement(int n, char k, string str) {
    
    for (int i = 0; i < n; i++) {
        if (isdigit(str[i]) && isPrime(str[i] - '0')) {
            str[i] = k;
        }
    }
    return str;
}

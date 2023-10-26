Problem
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered
somewhat hard to pronounce.
We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is
easyto pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is
hard to pronounce.
You are given a string S consisting of N lowercase Latin characters. Determine whether it is easy to
pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.
For the purposes of this problem, the vowels are the characters {a, e, i, o, u} and the consonants are
the other 21 characters.
Input Format
• The first line of input will contain a single integer T, denoting the number oftest cases.
• Each test case consists of two lines of input.
o The first line of each test case contains a single integer N, the length of string S.
o The second line of each test case contains the string S.

Answer:
#include <iostream>
using namespace std;

bool isvowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c== 'u' )
        return true;
    return false;
}

int main() {
    
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        string s;
        int n;
        cin>>n>>s;
        int count=0;

        for(char c : s)
        {
            if(isvowel(c))
            {
                count=0;
                continue;
            }
            else
            {
                count++;
                if(count==4)
                    break;
            }
        }
        
        if(count<4)
        {
           
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
	
	return 0;
}

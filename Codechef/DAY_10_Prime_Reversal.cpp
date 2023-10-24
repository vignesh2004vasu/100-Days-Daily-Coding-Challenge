Problem
You are given two binary strings A and B, each of length N. You can perform the following operation
on string A any number of times:
• Selecta prime number X.
• Choose any substring of string A having length X and reverse the substring.
Determine whether you can make the string A equal to B using any (possibly zero) number ofoperations.
A substring is obtained by deleting some (possibly zero) elements from the beginning and some
(possibly zero) elements from the end of the string.
Input Format
• The first line of input will contain a single integer T, denoting the number of test cases.
• Each test case consists of multiple lines of input.
o The first line of each test case contains an integer N— the length of the strings A and B.
o The second line contains the binary string A.
o The third line contains the binary string B.

Sample 1:
Input
4
2
00
00
4
1001
0111
5
11000
10010
5
11000
11010
Output
YES
NO
YES
NO

Answer:

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, N;
	cin>>T;
	string A = "", B = "";
	while(T > 0){
	    cin>>N;
	    cin>>A>>B;
	    if( count(A.begin(), A.end(), '1') ==  count(B.begin(), B.end(), '1') ) 
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	        
	    T--;
	}
	return 0;
}

You are given a string S with length N. You may perform the following operation any number of times:
choose a non-empty substring of S (possibly the whole string S) such that each character occurs an
even number of times in this substring and erase this substring from S. (The parts of S before and
after the erased substring are concatenated and the next operation is performed on this shorterstring.)
For example, from the string "acabbad", we can erase the highlighted substring "abba", since each
character occurs an even number of times in this substring. After this operation, the remaining string is
"acd".
Is it possible to erase the whole string using one or more operations?
Note: A string B is a substring of a string A if B can be obtained from A by deleting several (possibly
none or all) characters from the beginning and several (possibly none or all) characters from the end.
Sample 1:
Input
4
6
cabbac
7
acabbad
18
fbedfcbdaebaaceeba
21
yourcrushlovesyouback
Output
YES
NO
YES
NO
Explanation:
Example case 1: We can perform two operations: erase the substring "abba", which leaves us with the string "cc", and then erase "cc".
Answer:
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n, c;
	    string s, ans = "YES";
	    cin>> n >> s;
	    
	    if (n%2 != 0)
	        ans = "NO";
	    else {
	        for (int i=0; i<n; i++) {
	            c = count(s.begin(), s.end(), s[i]);
	        
	            if (c%2 != 0) {
	                ans = "NO";
	                break;
	            }
	        }
	    }
	    cout<< ans <<endl;
	}
	return 0;
}

Chef is working on his swap-based sorting algorithm for strings.
Given a string S of length N, he wants to know whether he can sort the string using his algorithm.
According to the algorithm, one can perform the following operation on string S any number of times:
• Choose some index i (1 if N) and swap thet character from the front and thet character
from the back.
More formally, choose an index i and swap Si and
For example, dcba can be converted to ecbd using one operation where i = 1.
Help Chef find if it is possible to sort the string using any (possibly zero) number of operations.


Example 1:

Input:
3
4
dbca
3
ccc
3
bza
Output:
YES
YES
NO 
Yes

Answer:

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,a;
	    cin>>s;
	    a =s;
	    sort(a.begin() ,a.end());
	 
	    if(a ==s){
	        cout<<"yes"<<endl;
	    }
	    else{
	        int i=0;
	        int j = n-1;
	        while(i<j){
	            if(s[i]>s[j]){
	                swap(s[i] , s[j]);
	            }
	            i++;
	            j--;
	        }
	        
	        if(a==s){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	    }
	}
	return 0;
}
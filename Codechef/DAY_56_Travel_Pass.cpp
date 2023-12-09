Chef is going on a road trip and needs to apply for inter-district and inter-state travel e-passes. It takes
A minutes to fill each inter-district e-pass application and B minutes for each inter-state e-pass
application.
His journey is given to you as a binary string S of length N where 0 denotes crossing from one district
to another district (which needs an inter-district e-pass), and a 1 denotes crossing from one state to
another (which needs an inter-state e-pass).
Find the total time Chef has to spend on filling the various forms.

Input:
3
2 1 2
00
2 1 1
01
4 2 1
1101
Output:
2
2
5


Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, a, b;
	    cin >>n >>a >>b;
	    string s;
	    cin >>s;
	    int count0 = 0, count1;
	    for(int i=0; i<n; i++){
	        if(s[i] == '0') count0++;
	    }
	    count1 = n - count0;
	    int ans = a*count0 + b*count1;
	    cout <<ans <<endl;
	}
	return 0;
}
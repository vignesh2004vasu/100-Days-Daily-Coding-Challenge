Chef has bought a new robot, which will be used for delivering dishes to his customers. He started
testing the robot by letting it move on a line.
Initially, the robot is placed at the coordinate c = X. Then, it should execute a sequence of N
commands, described by a string S with length N. Each character of this string is either 'L' or 'R',
denoting that the robot should walk one step to the left (decreasing x by 1) or to the right (increasing x by 1), respectively.
How many distinct points are visited by the robot when it has executed all the commands? A point p is
visited by the robot if p is an integer and the robot's position before or after executing some command
is x = P.
Input:
2
6 10
RRLLLL
2 0
LL
Output:
5
3
Explanation:
Example case 1: The robot followed the path 10 ->11->12 -> 10 —+ 9-> 8.
Example case 2: The robot followed the path 0  —>1 —2.
Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    string s;
	    cin >> s;
	    int max=x, min=x, count=1;
	    for(int i=0;i<n;i++){
	        if(s[i]=='L'){
	            x-=1;
	            if(min>x){
	                min=x;
	                count++;
	            }
	        }
	        else{
	            x+=1;
	            if(max<x){
	                max=x;
	                count++;
	            }
	        }
	    }
	    
	    cout << count << endl;
	}
	return 0;
}

Problem

Vasya likes the number 
239. Therefore, he considers a number pretty if its last digit is 2,3or 9.
Vasya wants to watch the numbers between L and R (both inclusive), so he asked you to determine how many pretty numbers are in this range. 
Can you help him?

Sample 1:
Input:
2
1 10
11 33
Output:
3
8
  
Answer:
#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int s,e;
	    cin>>s>>e;
	    int count=0;
	    
	    for(int j=s;j<=e;j++)
	    {
	        int p=j%10;
	        if((p==2)||(p==3)||(p==9))
	            count++;
	            
	    }
	    cout<<count<<endl;
	}
	return 0;
}


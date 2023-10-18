Chef has been participating regularly in rated contests but missed the last two contests due to his college exams.
He now wants to solve them and so he visits the practice page to view these problems.
Given a list of N contest codes, where each contest code is either START38 or LTIME108, 
help Chef count how many problems were featured in each of the contests.
Input
4
3
START38 LTIME108 START38
4
LTIME108 LTIME108 LTIME108 START38
2
LTIME108 LTIME108
6
START38 LTIME108 LTIME108 LTIME108 START38 LTIME108
  
Output:
2 1
1 3
0 2
2 4
Answer:
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    string arr[n];
	    int c1=0;
	    int c2=0;
	   for(int j=0;j<n;j++)
	   {
	       cin>>arr[j];
	       if(arr[j]=="START38")
	        c1++;
	       else
	        c2++;
	   }
	   cout<<c1<<" "<<c2<<endl;
	}
	return 0;
}


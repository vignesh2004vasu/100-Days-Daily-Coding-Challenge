A semester in Chefs University has 120 working days. The University's requirement is that a student should
be present for at least 75% of the working days in the semester. If not, the student is failed.
Chef has been taking a lot of holidays, and is now concerned whether he can pass the attendance
requirement or not. N working days have already passed, and you are given N bits - Bl, B2, BN. Bi =0
denotes that Chef was absent on the i day, and Bi=1 denotes that Chef was present on that day.
Inupt:
• First line will contain T, the number of testcases. Then the testcases follow.
• Each testcase contains two lines of input.
• The first line of each testcase contains a single integer, N, the number of days till now.
• The second line of each testcase contains a string B of length N where Bi represents the status of the i th day.
Output:
For each testcase, output the answer in a single line - "YES" if Chef can pass the attendance
requirement and "NO" if not.

Sample Inuput:
3
50
00000000000000000000000000000000000000000000000000
50
01010101010101010101010101010101010101010101010101
2
01
Output:
NO
YES
YES
Explanation:
For Case 1, even if Chef attends all the remaining 70 days, he'll only have an attendance percentage of
70/120 = 58.33% which is less than 75%.
For Case 2, maximum attendance possible is 79.167% which is more than 75%.
For Case 3, maximum attendance possible is 99.167% which is more than 75%.
 Solution:
  #include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int c1=0;
	    for(int i=0;i<n;i++)
	    {
	        char x;
	        cin>>x;
	        if(x=='1')
	            c1++;
	       
	    }
	    
	    int total=c1+(120-n);
	    int att=(total*100)/120;
	    
	    if(att >= 75)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	   
	    
	}
	return 0;
}

  

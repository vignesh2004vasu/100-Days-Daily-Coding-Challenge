You have three shoes of the same size lying around. Each shoe is either a left shoe (represented using 0)
or a right shoe (represented using 1). Given A, B, C, representing the information for each shoe,
find out whether you can go out now, wearing one left shoe and one right shoe.
For each test case, output in a single line the answer: 
1 if it's possible to go out with a pair of shoes and 
0 if not.

Input
3
0 0 0
0 1 1
1 0 1
Output
0
1
1
Answer:
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int count1=0;
        int count2=0;
        for(int i=0;i<3;i++)
        {
            int n;
            cin>>n;
            if(n==1)
                count1++;
            else
                count2++;
        }
        if(count1>=1 && count2>=1)
            cout<<1<<endl;
        else
            cout<<0<<endl;
            
        
    }
	return 0;
}

You are given the sizes of angles of a simple quadrilateral (in degrees) 
A,B,C,D in some order along its perimeter. Determine whether the quadrilateral is cyclic.
Note: A quadrilateral is cyclic if and only if the sum of opposite angles is 180.
Input
The first line of the input contains a single integer T denoting the number of test cases.
The description of T test cases follows.
The first and only line of each test case contains four space-separated integers 
A,B,C,D;

Input
3
10 20 30 300
10 20 170 160
179 1 179 1
Output
NO
YES
NO
Answer:
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+c==180 && b+d ==180)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	return 0;
}

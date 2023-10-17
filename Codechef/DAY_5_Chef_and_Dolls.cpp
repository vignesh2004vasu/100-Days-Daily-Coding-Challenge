Problem
 

Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!

Help chef find which type of doll is missing..

Input
The first line contains an integer T, the number of test cases.
The first line of each test case contains an integer N, the number of dolls.
The next N lines are the types of dolls that are left.
Output
For each test case, display the type of doll that doesn't have a pair, in a new line.

Sample 1:
Input
1
3
1 
2
1
Output
2
Sample 2:
Input

1
5
1
1
2
2
3
Output
3

Answer:
#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int Arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>Arr[i];
        }
        int ans=0;
        for(int i=0;i<N;i++)
        {
            ans^=Arr[i];
        }
        cout<<ans<<endl;
    }
}

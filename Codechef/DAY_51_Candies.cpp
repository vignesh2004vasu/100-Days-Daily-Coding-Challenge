Abhi is a salesman. He was given two types of candies, which he is selling in N different cities.
For the prices of the candies to be valid, Abhi's boss laid down the following condition:
• A given type of candy must have distinct prices in all N cities.
In his excitement, Abhi wrote down the prices of both the candies on the same page and in random
order instead of writing them on different pages. Now he is asking for your help to find out if the prices
he wrote are valid or not.
More formally, you are given an array A of size 2N. Find out whether it is possible to split A into two
arrays, each of length N, such that both arrays consist of distinct elements.
Input:
4
3
4 8 4 6 7 3
3
4 8 6 8 7 8
2
2 4 5 3
4
8 7 9 8 4 6 2 8
OutPut:
Yes
No
Yes
No
Answer:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	       int n,c=0;
	       cin>>n;
	       int a[2*n];
	       for(int i=0;i<2*n;i++)
	       {
	           cin>>a[i];
	       }
	       
	       for(int i=0;i<(2*n)-1;i++)
	       {
	         c=0;
	           for(int j=i;j<2*n;j++)
	           {
	               if(a[i]==a[j])
	
	                   c++;
	                   
	           }
	           if(c==3)
	           {
	               cout<<"NO"<<endl;
	               break;
	           }
	           
	       }
	       if(c<3)
	       cout<<"YES"<<endl;
	       
	}
	
	return 0;
}


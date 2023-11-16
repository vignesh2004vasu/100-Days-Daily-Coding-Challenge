In living donation, the following blood types are compatible:
• Blood type A donors can donate to recipients with blood types A and AB.
• Blood type B donors can donate to recipients with blood types B and AB.
• Blood type AB donors can donate to recipients with blood type AB only.
• Blood type o donors can donate to recipients with blood types A, B, AB and o.
There are N people in a hospital where the blood type of thet person is denoted by Bi. Note that the
value of Bi can be A, B, AB, or o only.
A chain is formed when a donor can donate blood to a recipient, who in turn can donate blood to
another recipient, and so on.
Find the maximum number of people that can form a chain of blood transfusions.

Sample 1:
Input:
4
3
A B A
2
A B
4
A B O B
5
AB A A AB A
Output:
2
1
3
5


Test case 1: Person 1 can donate to person 3. Thus, a chain of 2 people is formed.
Test case 2: Neither person can donate blood to the other. Thus, there is a single person in the chain.
Test case 3: Consider the chain 3 -> 2 -> 4. Here, person 3 can donate to person 2, and person 2 can
donate to person 4. Thus, a chain of 3 people can be formed.
Test case 4: The chain 2 -> 3 -> 5 —> 1 -> 4 of 5 people is possible for blood transfusions.
Answer:
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s[n];
	    
	    int no_A=0;
	    int no_B=0;
	    int no_O=0;
	    int no_AB=0;
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	        
	        if(s[i]=="A")
	        {
	            no_A++;
	        }
	        else if(s[i]=="B")
	        {
	            no_B++;
	        }
	        else if(s[i]=="O")
	        {
	            no_O++;
	        }
	        else  if(s[i]=="AB")
	        {
	            no_AB++;
	        }
	   }
	   
	   int chain =no_O;
	   if(no_A>no_B)
	   {
	       chain=chain+no_A+no_AB;
	   }
	   else
	   {
	       chain+=no_B+no_AB;
	   }
	   
	   cout<<chain<<endl;
	}
	   
	   
	    
	    
}

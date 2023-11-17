There are N hills in a row numbered 1 through N from left to right. Each hill has a height; for each valid
i, the height of the i-th hill is Hi. Chef is initially on the leftmost hill (hill number 1). He can make an
arbitrary number of jumps (including zero) as long as the following conditions are satisfied:
Chef can only jump from each hill to the next hill, i.e. from the i-th hill, he can jump to the i+l-th hill
(if it exists).
It's always possible to jump to a hill with the same height as the current hill.
It's possible to jump to a taller hill if it's higher than the current hill by no more than U.
It's possible to jump to a lower hill if it's lower than the current hill by no more than D.
Chef can use a parachute and jump to a lower hill regardless of its height (as long as it's lower than
the current hill). This jump can only be performed at most once.
Chef would like to move as far right as possible. Determine the index of the rightmost hill Chef can
reach.

Sample :
Input:
3
5 3 2
2 5 2 6 3
5 2 3
4 4 4 4 4
5 2 7
1 4 3 2 1
Output:
3
5
1
Answer:
#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    bool flag=true;
	    int count=1;
	    int n,u,d;
	    
	    cin>>n>>u>>d;
	    
	   int a[n];
	   for(int i=0;i<n;i++)
	   {
	        cin>>a[i];
	   }
	    
	  for(int i=0;i<n-1;i++)     
	  {
	   
	   if(a[i]==a[i+1])
	   {
	       count++;
	   }
	   
	    
	  else if(a[i+1]>a[i]&&a[i+1]<=a[i]+u)
	  {
	       count++;
	   }

	   else if(a[i+1]<a[i]&&a[i+1]>=a[i]-d)
	   {
	            count++;
	   }
	        
	   else if(a[i+1]<a[i] && a[i+1]<a[i]-d && flag)
	   {
	            count++;
	            flag=false;
	        }
	        
	        else
	        {
	            break;
	        }
	        
	   }
	    
	     cout<<count<<endl;
	    
	    
	}
	
	
	return 0;
}

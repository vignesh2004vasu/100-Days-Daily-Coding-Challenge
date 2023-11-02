Chef decided to go on a diet during the following N days (numbered 1 through N). Part of the diet plan
is to eat K grams of protein during each day. For each valid i, Chef wants to buy Ai grams of protein in
the morning of the i-th day and then eat K grams of protein as part of his dinner. If he has any protein
remaining, he can store it and use it in later dinners. Initially, Chef is storing 0 grams of protein.
Determine whether Chef will have enough protein all the time during his diet. In case he will not have
enough, find the first day on which Chef will be unable to eat K grams of protein.

Input
3
4 5
7 3 6 5
3 4
3 10 10
3 4
8 1 1
Output
YES
NO 1
NO 3
Answer:
#include <iostream>
using namespace std;

int main() {
	int t,n,k,a;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int count =0,flag=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        if(count+a>=k)
	        count+=a-k;
	        else if(flag==0)
	        flag=i+1;
	    }
	    if(flag>0)
	    cout<<"NO "<<flag<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}

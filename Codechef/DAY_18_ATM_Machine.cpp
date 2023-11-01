There is an ATM machine. Initially, it contains a total of K units of money. N people (numbered 1
through N) want to withdraw money; for each valid i, the i-th person wants to withdraw Ai units ofmoney.
The people come in and try to withdraw money one by one, in the increasing order of their indices.
Whenever someone tries to withdraw money, if the machine has at least the required amount of
money, it will give out the required amount. Otherwise, it will throw an error and not give out anything;
in that case, this person will return home directly without trying to do anything else.
For each person, determine whether they will get the required amount of money or not.
Input
2
5 10
3 5 3 2 1
4 6
10 8 6 4
Output
11010
0010
Example case 1: The ATM machine initially contains 10 units of money. The first person comes and
withdraws 3 units, so the amount remaining in the machine is 7. Then the second person withdraws 5
units and the remaining amount is 2. The third person wants to withdraw 3 units, but since there are
only 2 units of money in the machine, it throws an error and the third person must leave without
getting anything. Then the fourth person withdraws 2 units, which leaves nothing in the machine, so
the last person does not get anything.

Answer:
#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    for(int i=0;i<n;i++)
	    {
	        int m;
	        cin>>m;
	        if(x-m >=0)
	        {
	            x=x-m;
	            cout<<1;
	        }
	        else
	            cout<<0;
	    }
	    cout<<endl;
	}
	
	return 0;
}


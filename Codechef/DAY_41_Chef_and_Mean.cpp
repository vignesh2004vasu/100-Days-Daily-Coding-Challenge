Chef has invested his savings into N coins (numbered 1 through N). For each valid i, the i-th coin has
value Ai. Chef does not want to know how much money he has, so he remembers the mean value of
the coins instead of the sum of their values.
A waiter from Chefs restaurant plans to steal exactly one of Chefs coins, but he does not want Chef to
know about this, so he can only steal a coin if the arithmetic mean of all remaining coins is the same as
the original arithmetic mean of all coins. Since the waiter is not good at mathematics, can you help him
complete his plan?
You have to determine whether it is possible to steal some coin and if it is possible, choose the coin the
waiter should steal. If there are multiple coins that can be stolen, choose the one with the smallest
number.
Sample input:
3
5
1 2 3 4 5
4
5 4 3 6
10
1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000
Sample output:
3
Impossible
1
Answer:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x=0,flag=0,ans=0;
	    double sum=0,mean=0;
	    int n;
	    cin>>n;
	    vector<double> a;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        sum+= x;
	        a.push_back(x);
	    }
	    mean = sum/n;
	    
	    for(int i=0;i<n;i++){
	        if(a[i] == mean){
	            ans = i+1;
	            flag = 1;
	            break;
	        }
	    }
	    if(flag){
	        cout<<ans<<endl;
	    }
	    else{
	        cout<<"Impossible"<<endl;
	    }
	    
	}
	return 0;
}

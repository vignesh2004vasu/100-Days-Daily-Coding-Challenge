Finally, a COVID vaccine is out on the market and the Chefland government has asked you to form a
plan to distribute it to the public as soon as possible. There are a total of N people with ages
There is only one hospital where vaccination is done and it is only possible to vaccinate up to D people
per day. Anyone whose age is 80 or 9 is considered to be at risk. On each day, you may not
vaccinate both a person who is at risk and a person who is not at risk. Find the smallest number of days
needed to vaccinate everyone.
Sample 1:
Input
2
10 1
10 20 30 40 50 60 90 80 100 1
5 2
9 80 27 72 79
Output
10
3
Explanation:
Example case 1: We do not need to worry about how the people are grouped, since only one person can be vaccinated in a single day. We require as many days as there are people.
Example case 2: There are two people at risk and three people who are not at risk. One optimal strategy is to vaccinate the two people at risk on day 1
and the remaining three on the next day 2.
Answer:
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float n,d,val;
	    cin>>n>>d;
	    float risk=0,unrisk=0;
	    for(int i=0;i<n;i++){
	        cin>>val;
	        if(val>=80 || val<=9)
	            risk++;
	        else
	            unrisk++;
	    }
	    int d1=ceil(risk/d);
	    int d2=ceil(unrisk/d);
	    cout<<d1+d2<<endl;
	    
	}
	return 0;
}

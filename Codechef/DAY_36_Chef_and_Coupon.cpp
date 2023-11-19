Chef wants to order food from a food delivery app. He wishes to order once today, and buy three items
costing A1, A2 and .43 rupees, respectively. He'll also order once tomorrow, when he'll buy three items
costing Bl, B2 and B3 rupees, respectively. There is an additional delivery charge of rupees D for each
order.
He notices that there is a coupon on sale, which costs rupees C. If he buys that coupon, the delivery
charges on any day, on an order of rupees 150 or more shall be waived (that is, the D rupees will not
be added, if the sum of the costs of the items is 150).
Note that Chef is ordering the three items together on each day, so the delivery charge is charged only
once each day. Also, note that it's only needed to buy the coupon once to avail the delivery fee waiver
on both days.
Should Chef buy the coupon? Note that Chef shall buy the coupon only if it costs him strictly less than
what it costs him without the coupon, in total.
Sample 1:
Input
2
90 100
100 50 10
80 80 80
3030
100 100 100
10 20 30
Output
YES
NO
Answer:
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>> t;
	while (t--){
	    int d, c;
	    cin>> d>> c;
	    
	    int a[3], b[3];
	    int dy1 = 0, dy2 = 0;
	    
	    for (int i=0; i<3; i++){
	        cin>> a[i];
	        dy1 +=a[i];
	    }
	    
	    for (int i=0; i<3; i++){
	        cin>> b[i];
	        dy2 +=b[i];
	    }
	    
	    
	    int costWithout = dy1 + dy2 + 2*d;
	    int costWith = dy1 + dy2 + c;
	    
	    if (dy1 < 150){
	        costWith += d;
	    }
	    
	    
	    if (dy2 < 150){
	        costWith += d;
	    }
	    
	    
	    
	    
	    if (costWith < costWithout){
	        cout<< "YES" <<endl;
	    }
	    else cout<< "NO" <<endl;   
	    
	}
	return 0;
}

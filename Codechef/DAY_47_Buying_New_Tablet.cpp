Chef decided to buy a new tablet. His budget is B, so he cannot buy a tablet whose price is greater than
B. Other than that, he only has one criterion — the area of the tablet's screen should be as large as
possible. Of course, the screen of a tablet is always a rectangle.
Chef has visited some tablet shops and listed all of his options. In total, there are N available tablets,
numbered 1 through N. For each valid i, the i-th tablet has width Wi, height Hi and price Pi.
Help Chef choose a tablet which he should buy and find the area of such a tablet's screen, or determine
that he cannot buy any tablet.
  Input:
  3
3 6
3 4 4
5 5 7
5 2 5
2 6
3 6 8
5 4 9
1 10
5 5 10
  Output:
  12
no tablet
25

  Answer:
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N,B;
	    cin>>N>>B;
	    int max=0;
	    for(int i=0;i<N;i++)
	    {
	        int w,h,p;
	        cin>>w>>h>>p;
	        if(p<=B)
	        {
	            if(w*h>=max)
	                max=w*h;
	        }
	        
	    }
	    if(max==0)
	        cout<<"no tablet"<<endl;
	   else
	    cout<<max<<endl;
	}
	return 0;
}

Karan likes the number 4 very much.
Impressed by the power of this number, Karan has begun to look for occurrences of four anywhere. He
has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4
in the decimal representation. He is too busy now, so please help him.
Input Format
The first line of input consists of a single integer T, denoting the number of integers in Karan's list.
Then, there are T lines, each of them contain a single integer from the list.
Output Format
Output T lines. Each of these lines should contain the number of occurrences of the digit 4 in the
respective integer from Karan's list.

Input
5
447474
228
6664
40
81
Output
4
0
1
1
0
Answer:
#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{   
	    string a;
	    int c=0;
	    cin>>a;
	    for(int i=0;i<a.size();i++){
	        if(a[i]== '4'){
	            c++;
	        }
	        
	    }
	    cout<<c<<endl;
	}
}

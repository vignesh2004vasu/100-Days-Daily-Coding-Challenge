Chef has a sequence A1, 242, ... , AN. He needs to find the number of pairs (i, j) (1 i < j N)
such that Ai + Aj = Ai • Ai. However, he is busy, so he asks for your help.
Input
The first line of the input contains a single integer T denoting the number of test cases. The
description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1, .42, ... , AN
Input:
2
3
2 4 2
3
0 2 3
Output:
1
0
Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int arr[x];
	    int count=0,sum=0,ref=0,res=0;
	    for(int i=0;i<x;i++){
	        cin>>arr[i];
	        if(arr[i]==2){
	            count++;
	        }
	        if(arr[i]==0){
	            ref++;
	        }
	    }
	    for(int i=1;i<count;i++){
	        sum+=i;
	    }
	    for(int i=1;i<ref;i++){
	        res+=i;
	    }
	   cout<<sum+res<<endl;
	}
	return 0;
}

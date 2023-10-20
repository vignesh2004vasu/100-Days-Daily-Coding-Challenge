Problem
You are required to enter a word that consists of x and y 
that denote the number of Zs and Os respectively. 
The input word is considered similar to word zoo if 2*x=y.
Determine if the entered word is similar to word zoo.
For example, words such as zzoooo and zzzoooooo are similar to word zoo 
but not the words such as zzooo and zzzooooo.

Print Yes if the input word can be considered as the string zoo otherwise, print No.
Sample Input
zzzoooooo
Sample Output
Yes
Answer:
#include <bits/stdc++.h>
using namespace std;
int main() {
	
	vector<char> vec;
	string s;
	cin>>s;

	for(char c: s)
	{
		vec.push_back(c);
	}
	int z=0;
	int o=0;

	int n=vec.size();

	for(int i=0;i<n;i++)
	{
		if(vec[i]=='z')
			z++;
		else if(vec[i]=='o')
			o++;
	}

	if(2*z==o)
		cout<<"Yes";
	else
		cout<<"No";

}

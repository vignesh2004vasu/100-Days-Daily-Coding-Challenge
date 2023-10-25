Problem
Bob and Alice are having a lockout match between them. There are three problems in the contest
worth A, B, and C points respectively. Only the first player to solve a problem gets points for that
problem. It is impossible for Bob and Alice to solve a problem at the same time. Chef wants to know if
there is any chance of a draw if Bob and Alice manage to solve all 3 problems. A draw occurs when
both players end with equal number of points.
Sample 1:
Input
3
2 5 2
4 2 2
3 5 5
Output
NO
YES
NO
Explanation:
In the first and third test cases, it is impossible for Bob and Alice to solve the problems so that they
have the same number of points at the end.
In the second case, it is possible for Bob to solve the first problem, and Alice to solve the last two
problems, in which case they will both have 4 points and the game will end in a draw.
Answer:

#include<bits/stdc++.h>
using namespace std;
int main() {

	int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++) 
        {
            cin>>a[i];
        }
        sort(a,a+3);
        if(a[2]==a[0]+a[1])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}

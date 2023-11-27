Chef and Chefina are playing the famous game of Rock, Paper, Scissors.
The game consists of N rounds. In each round, both players choose one of the three moves: Rock,
Paper, or Scissors, denoted by R, P, and s respectively.
• If both players play the same move, the current round ends in a draw and neither of them gets a
point.
• If one of the players plays Rock and the other plays Scissors, the player who played Rock wins the
round and gets a point.
• If one of the players plays Scissors and the other plays Paper, the player who played Scissors wins the
round and gets a point.
• If one of the players plays Paper and the other plays Rock, the player who played Paper wins the
round and gets a point.
The winner of the game is the player who gets the maximum number of points after playing all the
rounds. If both players have the same number of points, then the game ends in a draw.
You are given two strings A and B, each of length N, consisting of uppercase English letters R, P, and s,
where Ai denotes the move made by Chef in thet round and Bi denotes the move made by Chefina
in the round.
Find the minimum number of rounds Chef should have played differently to have won the game.
Input:
3
3
RRR
SPP
2
RP
SP
3
PSP
SRP
Output:
1
0
2

Answer:
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    string a,b;
	    cin>>a>>b; int o=0,t=0;
	   // int aa=a,bb=b;
	    int i=0;
	    while(i<n)
	    {char ar=a.at(i),br=b.at(i);
	        if(ar=='R'&&br=='S')
	        {
               o++;	            
	        }
	        else if(ar=='R'&&br=='P')
	        {
	            t++;
	        }
	        else if(ar=='S'&&br=='P')
	        {
	            o++;
	        }
	        else if(ar=='S'&&br=='R')
	        {
	            t++;
	        }
	        else if(ar=='P'&&br=='R')
	        {
	            o++;
	        }
	        else if(ar=='P'&&br=='S')
	        {
	            t++;
	        }
	        else{}
	        i++;
	    }
	   if (t>=o) 
         { int y=(o+t)/2;y=y+1;
            cout << (y- o) << endl;
        }
        else  { cout << 0 << endl;
        } 
	}
	return 0;
}

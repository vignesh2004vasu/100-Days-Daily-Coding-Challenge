Chef is playing a certain video game that requires him to collect Monsters, and use them to fight
against other Monsters.
Chef's favorite Monster has an attack stat of X, and is fighting against another monster whose health stat is H.
The fight proceeds in turns: each turn, Chefs Monster does X damage to its opponent.
However, Chefs Monster has the ability Slow Start, which halves its attack for the first five turns.
That is, for the first five turns, the damage done to the opponent is and not X.
How many turns will Chefs Monster take to defeat the opponent (i.e, do at least H damage to it)?
Input
4
4 7
4 16
100 1
2 1000
Output
4
7
1
503

Explanation:
Test case 1: X = 4, so X/2= 2 damage is done for the first five turns.
By the fourth turn, 8 damage has been done, which is more than H = 7.
Test case 2: Once again, X = 4 so 2 damage is done for the first five turns.
By the fifth turn, 10 damage has been done, leaving the opponent with 16 — 10 = 6 health.
After this, 4 damage is done each turn, so we need two more turns to do 6 damage; for a total of 5 +
2 = 7 turns.
Test case 3: 50 damage is done on the first turn, which is immediately enough.

Answer:
#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int x,h; cin>>x>>h;
	    int ans=0,i=0;
	    while(h>0 && i<5){
	        h=h-(x/2);
	        ans++;
	        i++;
	    }
	    while(h>0){
	        h=h-x;
	        ans++;
	    }
	    cout<<ans<<endl;
	}
	
	
	return 0;
}

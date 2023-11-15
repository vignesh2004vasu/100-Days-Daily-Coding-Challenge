A competition with N participants (numbered 1 through N) is taking place in Chefland. There are N —
1 rounds in the competition; in each round, two arbitrarily chosen contestants battle, one of them loses
and drops out of the competition.
There are 10 types of weapons (numbered 1 through 10). You are given N strings Sl, *52, ... , SN; for
each valid i and j, the j-th character of Si is '1' if the i-th contestant initially has a weapon of type j or
'0' otherwise. During each battle, for each type j such that both contestants in this battle currently have
weapons of type j, these weapons of both contestants are destroyed; after the battle, the winner
collects all remaining (not destroyed) weapons of the loser. Note that each contestant may win or lose
regardless of the weapons he/she has.
Chef is feeling bored watching the contest, so he wants to find the maximum possible number of
weapons the winner of the tournament could have after the last battle, regardless of which contestants
fight in which battles or the results of the battles. Can you help him?

Sample 1:
Input
1
3
1110001101
1010101011
0000000011
Output
4
Explanation:
Example case 1: Ifthe first person defeats the second person, weapons 1, 3, 7 and 10 are destroyed.
Then, if the third person defeats the first person (who now has weapons 2, 5, 8 and 9), weapons 9 are
destroyed and the winner has weapons 2, 5, 8 and 10.

Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N,cnt=0;
	    cin >> N;
	    string temp1,temp2;
	    cin >> temp1;
	    for(int i=1;i<N;i++){
	        cin >> temp2;
	        for(int j=0;j<10;j++){
	            if(temp1[j]!=temp2[j]){
	                temp2[j] = '1';
	            }
	            else
	                temp2[j] = '0';
	        }
	        temp1 = temp2;
	    }
	    
	    for(int i=0;i<10;i++){
	        if(temp1[i]=='1')
	            cnt++;
	    }
	    cout << cnt << '\n';
	    
	}
	return 0;
}

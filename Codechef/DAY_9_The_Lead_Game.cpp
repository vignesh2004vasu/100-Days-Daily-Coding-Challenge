Problem
The game of billiards involves two players knocking 3 balls around on a green baize table. Well, there is more to it, but for our purposes this is sufficient.
The game consists of several rounds and in each round both players obtain a score, based on how well they played.
Once all the rounds have been played, the total score of each player is determined by adding up the scores in all the rounds and the player with the higher total score is declared the winner.
The Siruseri Sports Club organises an annual billiards game where the top two players of Siruseri play against each other. 
The Manager of Siruseri Sports Club decided to add his own twist to the game by changing the rules for determining the winner.
In his version, at the end of each round, the cumulative score for each player is calculated, and the leader and her current lead are found. 
Once all the rounds are over the player who had the maximum lead at the end of any round in the game is declared the winner.

Sample 1:
Input
5
140 82
89 134
90 110
112 106
88 90
Output:
1 58

Answer:
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int player1_total = 0, player2_total = 0;
    int max_lead = 0;
    int winner = 1; 
    
    for (int i = 0; i < N; i++) {
        int player1, player2;
        cin>>player1>>player2;
        
        player1_total += player1;
        player2_total += player2;
        
        int lead = abs(player1_total - player2_total);
        if (lead > max_lead) {
            max_lead = lead;
            if (player1_total > player2_total) {
                winner = 1;
            } else {
                winner = 2;
            }
        }
    }
    
    cout <<winner<<" "<<max_lead<<endl;
    
    return 0;
}

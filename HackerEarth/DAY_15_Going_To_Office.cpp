Problem
Alice has the following two types of taxis:
• Online taxi: It can be booked by using an online application from phones
• Classic taxi: It can be booked anywhere on the road
The online taxis cost Oc for the first Of km and Od for every km afterward. The classic
taxis travel at a speed of Cs km per minute. The cost of classic taxis are Cb, Cm, and Cd
that represents the base fare, cost for every minute that is spent in the taxi, and cost for
each kilometer that you ride.
You are going to the office from your home. Your task is to minimize the cost that you are
required to pay. The distance from your home to the office is D. You are required to select
whether you want to use online or classic taxis to go to your office. If both the taxis cost
the same, then you must use an online taxi.
Sample Input
13
6 7 4
4 2 1 2
Sample Output
Online Taxi
Explanation
If Felix choose to use Online Taxi, it will cost Felix a
total of 6 + (13 — 7) x 4 = 30
While the classic taxi will cost Felix a total of
2+(13/4) x 1+13 x 2 = 31

Answer:
  #include <bits/stdc++.h>
using namespace std;

int main() {
    int D;
    cin>>D;
    
    int Oc,Of,Od;
    cin>>Oc>>Of>>Od;
    
    int Cs,Cb,Cm,Cd;
    cin>>Cs>>Cb>>Cm>>Cd;
    
    
    int cost_online = Oc + (D - Of) * Od;
    int cost_classic = Cb + (D / Cs) * Cm + D * Cd;

    if (cost_online <= cost_classic) {
        cout << "Online Taxi" << std::endl;
    } else {
        cout << "Classic Taxi" << std::endl;
    }

    return 0;
}


It is New Year's Day and people are in line for the Wonderland rollercoaster ride.
Each person wears a sticker indicating their initial position in the queue from 1 to n.
Any person can bribe the person directly in front of them to swap positions, but they
still wear their original sticker. One person can bribe at most two others.
Determine the minimum number of bribes that took place to get to a given queue
order. Print the number of bribes, or, if anyone has bribed more than two people,
print Too chaotic.

Example
If person 5 bribes person 4, the queue will look like this: 1, 2, 3, 5, 4, 6, 7, 8. Only 1
bribe is required. Print 1.
Person 4 had to bribe 3 people to get to the current position. Print Too chaoti c.

Answer:
  
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int x = 0; x < t; x++) {
        int n;
        cin >> n;
        int bribes = 0;
        int q[n];

        for (int i = 0; i < n; i++)
            cin >> q[i];

        bool chaotic = false;

        for (int i = 0; i < n; i++) {
            if (q[i] - (i + 1) > 2) {
                chaotic = true;
                break;
            }  

            for (int j = max(0, q[i] - 2); j < i; j++) {
                if (q[j] > q[i]) {
                    bribes++;
                }
            }
        }

        if (chaotic) {
            cout << "Too chaotic" << endl;
        } else {
            cout << bribes << endl;
        }
    }

    return 0;
}

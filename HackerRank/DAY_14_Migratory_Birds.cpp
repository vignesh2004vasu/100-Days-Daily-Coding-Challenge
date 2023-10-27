Given an array of bird sightings where every element represents a bird type id,
determine the id of the most frequently sighted type. If more than 1 type has been
spotted that maximum amount, return the smallest of their ids.
Example
arr=[1,1,2,2,3]
There are two each of types 1 and 2, and one sighting of type 3. Pick the lower of the
two types seen twice: type 1.
Sample Input 0
6
1 4 4 4 5 3
Sample Output 0
4
Answer:
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count[6] = {0}; 

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x >= 1 && x <= 5) {
            count[x]++;
        }
    }

    int maxFrequency = -1;
    int maxIndex = -1;

    for (int i = 1; i <= 5; i++) {
        if (count[i] > maxFrequency) {
            maxFrequency = count[i];
            maxIndex = i;
        }
    }

    cout << maxIndex << endl; 

    return 0;
}


Ninja wants to meet his 'N' old friends standing in a row. All the friends along with Ninja are very happy because they 
are meeting after a long time. The happiness of each friend can be represented as a positive integer. Initially, Ninja
has some happiness value Ninja shakes hands with all of his 'N' friends standing in a row one by one. While shaking hands 
if the happiness value of Ninja matches with that of his friend, then the happiness value of Ninja becomes double. Ninja wants to
calculate his happiness value after he shakes hands with all of his friends. For Example: For 'FRIENDS' [3, 2, 1, 4]. And 'K' 2, following are the results after each hand shake:
1. At index O the happiness value of his friend is 3 and the happiness value of
Ninja is 2. Both are unequal so 'K' remains the same.
2. At index 1 the happiness value of his friend is 2 and the happiness value of
Ninja is 2. Both are equal so 'K' becomes 4.
3. At index 2 the happiness value of his friend is 1 and the happiness value of
Ninja is 4. Both are unequal so 'K' remains the same.
4. At index 3 the happiness value of his friend is 4 and the happiness value of
Ninja is 4. Both are equal so 'K' becomes 8.
As Ninja is busy with his friends so he needs your help. Can you help Ninja to
find his final happiness value after all the handshakes?

Answer:
#include <bits/stdc++.h> 
int shakeHands(vector<int> &friends ,int n, int k)
{
    int happy = k;

    for (int i = 0; i < n; ++i) {
        if (friends[i] == happy) {
            happy *= 2;
        }
    }

    return happy;
}
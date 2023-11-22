All friends are invited and they arrive at the party one by one in an arbitrary order. However, they have
certain conditions — for each valid i, when the i-th friend arrives at the party and sees that at that
point, strictly less than Ai other people (excluding Chef) have joined the party, this friend leaves the
party; otherwise, this friend joins the party.
Help Chef estimate how successful the party can be — find the maximum number of his friends who
could join the party (for an optimal choice of the order of arrivals).
Sample 1:
Input
3
2
0 0
6
3 1 0 0 5 5
3
1 2 3
Output
2
4
Explanation:
Example case 1: Chef has two friends. Both of them do not require anyone else to be at the party
before they join, so they will both definitely join the party.
Example case 2: At the beginning, friends 3 and 4 can arrive and join the party, since they do not
require anyone else to be at the party before they join. After that, friend 2 can arrive; this friend would
see that there are two people at the party and therefore also join. Then, friend 1 will also join, so in the
end, there would be 4 people attending the party.
Example case 3: No one will attend the party because each of Chefs friends will find zero people at the
party and leave, regardless of the order in which they arrive.

Answer:
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    sort(arr, arr + n);

    int count = 0;
    if (arr[0] == 0)
    {
      count = 1;
      for (int i = 1; i < n; i++)
      {
        if (count >= arr[i])
        {
          count++;
        }
        else
        {
          break;
        }
      }

      cout << count << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }
  return 0;
}

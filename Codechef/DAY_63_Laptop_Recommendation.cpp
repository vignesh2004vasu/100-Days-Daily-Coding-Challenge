Chef wants to buy a new laptop. However, he is confused about which laptop to buy out of 10 different
laptops. He asks his N friends for their recommendation. The t friend recommends the Chef to buy the
Aith laptop (1 Ai 10).
Chef will buy the laptop which is recommended by maximum number of friends. Determine which laptop
Chef buys.
Print CONFUSED if there are multiple laptops having maximum number of recommendations.

Input:
4
5
4 4 4 2 1
7
1 2 3 4 5 6 6
6
2 2 3 3 10 8
4
7 7 8 8

Output:
4
6
CONFUSED
CONFUSED

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
        int a[n], freq[11] = {0}, maxi = 0, ans;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
            if (maxi < freq[a[i]])
            {
                ans = a[i];
                maxi = freq[a[i]];
            }
        }

        int repeat = -1;
        for (int i = 0; i < 11; i++)
        {
            if (freq[i] == maxi)
                repeat++;
        }

        if (repeat)
            cout << "CONFUSED\n";
        else
            cout << ans << endl;
    }
    return 0;
}
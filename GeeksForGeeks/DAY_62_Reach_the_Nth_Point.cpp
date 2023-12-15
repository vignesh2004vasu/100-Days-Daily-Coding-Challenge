There are N points on the road, you can step ahead by 1 or 2 .If you start from a point 0, and can only move from point i to point i + 1 after taking a step of length one, find the number of ways you can reach at point N.

                                                                                                                                                                            Example 1 :

    Input : N = 4 Output : 5 Explanation : Three ways to reach at 4th point.They are{1, 1, 1, 1},
            {1, 1, 2},
{
    1, 2, 1
}
{2, 1, 1}, {2, 2}.

           Example 2 :

    Input : N = 5 Output : 8 Explanation : Three ways to reach at 5th point.They are{1, 1, 1, 1, 1},
            {1, 1, 1, 2}, {1, 1, 2, 1}, {1, 2, 1, 1},
{
    2, 1, 1, 1
}
{1, 2, 2}, {2, 1, 2}, {2, 2, 1}

Answer : class Solution
{
public:
    int nthPoint(int n)
    {
        const int MOD = 1e9 + 7;
        if (n <= 1)
            return n;

        int a = 1, b = 1, c;
        for (int i = 2; i <= n; i++)
        {
            c = (a % MOD + b % MOD) % MOD;
            a = b;
            b = c;
        }
        return b;
    }
};
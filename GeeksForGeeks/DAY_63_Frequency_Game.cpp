Given an array A of size N.The elements of the array consist of positive integers.You have to find the largest element with minimum frequency.

    Example 1 :

    Input : 5 2 2 5 50 1 Output : 50 Explanation : All elements are having frequency 1 except 2. 50 is the maximum element with minimum frequency.Example 2 :

    Input : 4 3 3 5 5 Output : 5 Explanation : Both 3 and
    5 have the same frequency,
    so 5 should be returned.

    Answer :

    class Solution
{
public:
    int LargButMinFreq(int arr[], int n)
    {
        unordered_map<int, int> frequency;

        for (int i = 0; i < n; ++i)
        {
            frequency[arr[i]]++;
        }

        int minFreq = INT_MAX;
        int largestElementWithMinFreq = INT_MIN;

        for (auto it = frequency.begin(); it != frequency.end(); ++it)
        {
            minFreq = min(minFreq, it->second);
        }

        for (auto it = frequency.begin(); it != frequency.end(); ++it)
        {
            if (it->second == minFreq)
            {
                largestElementWithMinFreq = max(largestElementWithMinFreq, it->first);
            }
        }

        return largestElementWithMinFreq;
    }
};
You are given an array 'arr'of length 'n'. Find the index(O-based) of a peak element in the array. If there are
multiple peak numbers, return the index of any peak number.
Peak element is defined as that element that is greater than both of its neighbors. If 'arr[i]' is the peak
element, larr[i - 1]' < 'arr[i]' and 'arro + 1]' < 'arr[i]'.
Assume 'arr[-l]' and 'arr[n]' as negative infinity.

Sample Input 1:
5
1 8 1 5 3


Expected Answer:
1


Output on Console:
True


Explanation of sample input 1 :
There are two possible answers. Both 8 and 5 are peak elements, so the correct answers are their positions, 1 and 3. Any of these 2 numbers will print 'True'.


Sample Input 2:
3
1 2 1 


Expected Answer:
1

Answer:
int findPeakElement(vector<int> &arr)
{
    int left = 0, right = arr.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[mid + 1])
        {

            right = mid;
        }
        else
        {

            left = mid + 1;
        }
    }

    return left;
}

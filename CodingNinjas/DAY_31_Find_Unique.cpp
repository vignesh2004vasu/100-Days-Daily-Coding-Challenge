You have been given an integer array/list(ARR) of size N. Where N is equal to
[2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is
present only once.
You need to find and return that number which is unique in the array/list.

Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice, 
and the number 1 is present only once. So, the unique number in this array is 1.
Answer:
int findUnique(int *arr, int size)
{
    int result=0;

    for(int i=0;i<size;i++)
    {
        result^=arr[i];
    }

    return result;
}

You are given a sorted array 'arr'of distinct values and a target value 'm'.
You need to search for the index of the target value in the array.
Sample Input 1:
4 9
1 2 4 7


Sample Output 1:
4

Explanation of Input 1:
The given array 'arr' is: [1, 2, 4, 7] and m = 9. We insert m = 9 in the array and get 'arr' as: [1, 2, 4, 7, 9]. The position of 9 is 4 (according to 0-based indexing).


Sample Input 2:
3 1
2 5 7


Sample Output 2
0


Explanation of Input 2:
The given array 'arr' is: [2, 5, 7] and m = 1. We insert m = 1 in the array and get 'arr' as: [1, 2, 5, 7]. The position of 1 is 0 (according to 0-based indexing)


Sample Input 3:
4 2
1 2 4 7

Answer:
int searchInsert(vector<int>& arr, int m)
{
	int low = 0;
    int high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == m) {
            return mid;
        } else if (arr[mid] < m) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return low;
}
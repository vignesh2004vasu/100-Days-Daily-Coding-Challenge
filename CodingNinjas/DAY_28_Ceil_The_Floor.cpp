You're given a sorted array 'a'of 'n' integers and an integer 'x'.
Find the floor and ceiling of 'x' in 'a[O..n-1]'.
Note:
Floor of 'x' is the largest element in the array which is smaller than or equal to 'x' .
Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.
Example:
Input :
n=6, x=5, a=[4, 7, 8, 8, 10]
Output :
4
Explanation :
The floor and ceiling of 'x" = 5 are 4 and 7,respectively.
Answer:
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor = -1, ceil = -1;

    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
    
            return {x, x};
        } else if (a[i] < x) {
            floor = a[i];
        } else {
          
            ceil = a[i];
            break; 
        }
    }

    return {floor, ceil};
}

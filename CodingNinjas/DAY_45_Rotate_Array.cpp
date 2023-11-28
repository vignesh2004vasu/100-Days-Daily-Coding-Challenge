
Sample Input 1:
8
7 5 2 11 2 43 1 1
2
Sample Output 1:
2 11 2 43 1 1 7 5
Explanation of Sample Input 1:
Rotate 1 steps to the left: 5 2 11 2 43 1 1 7
Rotate 2 steps to the left: 2 11 2 43 1 1 7 5
Sample Input 2:
4
5 6 7 8
3
Sample Output 2:
8 5 6 7
Explanation of Sample Input 2:
Rotate 1 steps to the left: 6 7 8 5
Rotate 2 steps to the left: 7 8 5 6
Rotate 2 steps to the left: 8 5 6 7
Answer:
vector<int> rotateArray(vector<int>arr, int k) {
    
    int n = arr.size();
    k = k % n; 

    vector<int> rotated(n);

   
    for (int i = 0; i < n - k; ++i) {
        rotated[i] = arr[i + k];
    }

    
    for (int i = n - k, j = 0; i < n; ++i, ++j) {
        rotated[i] = arr[j];
    }

    return rotated;
}

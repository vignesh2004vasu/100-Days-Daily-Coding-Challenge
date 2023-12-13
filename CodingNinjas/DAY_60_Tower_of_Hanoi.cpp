You are given three rods (numbered 1 to 3), and 'N' disks initially placed on the first rod, one on top of each
other in increasing order of size ( the largest disk is at the bottom). You are supposed to move the 'N' disks to
another rod(either rod 2 or rod 3) using the following rules and in less than 2 A (N) moves.
1. You can only move one disk in one move.
2. You can not place a larger disk on top of a smaller disk.
3. You can only move the disk at the top of any rod.

Sample Input 1 :
2
1
2
Sample Output 1 :
1
1
Explanation of Sample Input 1 :
In the first test case, 
you can move the only disk to either rod 2 or rod 3. The matrix to be returned should be either { { 1, 2 } } or { {1, 3 } }.

In the second test case, 
you can move the topmost disk from rod 1 to rod 2. Then move the remaining disk from rod1 to rod 3. Now move the disk in rod 2 to rod 3. . One of the correct ways to return the output is { { 1, 2 }, { 1, 3 }, { 2, 3 } }.  
Sample Input 2 :
1
3
Sample Output 2 :
1
Explanation of Sample Input 2 :
One of the correct matrices is { { 1, 2 }, { 1, 3 }, { 2, 3 }, { 1, 2 }, { 3, 1 }, { 3, 2 }, { 1, 2 } }.
Answer:

void moveDisks(int n, int source, int destination, int auxiliary, vector<vector<int>>& result) {
    if (n == 1) {
        result.push_back({source, destination});
        return;
    }
    moveDisks(n - 1, source, auxiliary, destination, result);
    result.push_back({source, destination});
    moveDisks(n - 1, auxiliary, destination, source, result);
}

vector<vector<int>> towerOfHanoi(int n) {
    vector<vector<int>> result;
    moveDisks(n, 1, 2, 3, result);
    return result;
}

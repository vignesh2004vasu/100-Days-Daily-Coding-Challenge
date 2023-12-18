Given an array A of size N. The value of an array is denoted by the bit-wise XOR of all elements it contains. Find the bit-wise XOR of the values of all subarrays of A.

Example 1:

Input: 
N = 3 
A = [1,2,3] 
Output: 
2
Explanation:
xor[1] = 1
xor[1, 2] = 3
xor[2, 3] = 1
xor[1, 2, 3] = 0
xor[2] = 2
xor[3] = 3
Result : 1 ^ 3 ^ 1 ^ 0 ^ 2 ^ 3 = 2
Example 2:

Input: 
N = 2
A = [1,2]
Output: 
0
Explanation:
xor[1] = 1
xor[1, 2] = 3
xor[2] = 2
Result : 1 ^ 3 ^ 2 = 0

Answer:
class Solution {
  public:
    int gameOfXor(int N , int A[]) {
         int result = 0;
    for (int i = 0; i < N; ++i) {
        int occurrences = (i + 1) * (N - i);
        if (occurrences % 2 == 1) {
            result ^= A[i];
        }
    }
    return result;
    }
};
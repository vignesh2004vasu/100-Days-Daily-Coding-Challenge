You are given an array A of N integers and an integer K, and your task is to find the total number of cuts that you can make such that for each cut these two conditions are satisfied
1. A cut divides an array into two parts equal or unequal length (non-zero).
2. Sum of the largest element in the left part and the smallest element in the right part is greater than or equal to K.

Example 1:

Input:
N=3
K=3
A[]={1,2,3}
Output:
2
Explanation:
Two ways in which array is divided to satisfy above conditions are:
{1} and {2,3} -> 1+2>=3(satisfies the condition)
{1,2} and {3} -> 2+3>=3(satisfies the condition)
Example 2:

Input:
N=5
K=5
A[]={1,2,3,4,5}
Output:
3
Explanation:
{1,2} and {3,4,5} -> 2+3>=5
{1,2,3} and {4,5} -> 3+4>=5
{1,2,3,4} and {5} -> 4+5>=5

Answer:
class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
         int count = 0;

        vector<int> maxLeft(N), minRight(N);

        maxLeft[0] = A[0];
        for (int i = 1; i < N; ++i) {
            maxLeft[i] = max(maxLeft[i - 1], A[i]);
        }

        minRight[N - 1] = A[N - 1];
        for (int i = N - 2; i >= 0; --i) {
            minRight[i] = min(minRight[i + 1], A[i]);
        }

        for (int i = 0; i < N - 1; ++i) {
            if (maxLeft[i] + minRight[i + 1] >= K) {
                count++;
            }
        }

        return count;
    }
};
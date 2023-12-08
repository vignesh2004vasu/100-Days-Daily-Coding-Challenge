Given an array of n integers. Find the minimum non-negative number to be inserted in array, 
so that sum of all elements of array becomes prime.

Example 1:

Input:
N=5
arr = {2, 4, 6, 8, 12}
Output:  
5
Explanation: 
The sum of the array is 32 ,we can add 5 to this to make it 37 which is a prime number.
Example 2:

Input:
N=3
arr = {1, 5, 7}
Output:  
0 
Explanation: 
The sum of the array is 13 which is already prime. 
Answer:
class Solution
{
    public:
    
    bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int minNumber(int arr[], int N) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    if (isPrime(sum)) {
        return 0; 
    } else {
        int additional = 0;
        while (!isPrime(sum + additional)) {
            additional++;
        }
        return additional;
    }
}
};

Given an array of N integers, find the sum of xor of all pairs of numbers in the array arr. 
In other words, select all possible pairs of i and j from 0 to N-1 (i<j) and determine sum of all (arri xor arrj).
Example 1:

Input : arr[ ] = {7, 3, 5}
Output : 12
Explanation:
All possible pairs and there Xor
Value: ( 3 ^ 5 = 6 ) + (7 ^ 3 = 4)
 + ( 7 ^ 5 = 2 ) =  6 + 4 + 2 = 12
Example 2:

Input : arr[ ] = {5, 9, 7, 6} 
Output :  47
Explanation:
All possible pairs and there Xor
Value: (5 ^ 9 = 12) + (5 ^ 7 = 2)
 + (5 ^ 6 = 3) + (9 ^ 7 = 14)
 + (9 ^ 6 = 15) + (7 ^ 6 = 1)
 = 12 + 2 + 3 + 14 + 15 + 1 = 47

Answer:
class Solution{
    public:

    long long int sumXOR(int arr[], int n)
    {
    	
    long long int result = 0;

    for (long long int bit = 0; bit < 32; bit++) {
        long long int countOnes = 0;

        for (long long int i = 0; i < n; i++) {
            if (arr[i] & (1 << bit)) {
                countOnes++;
            }
        }

 
        result += (1 << bit) * countOnes * (n - countOnes);
    }

        return result;
    }
};

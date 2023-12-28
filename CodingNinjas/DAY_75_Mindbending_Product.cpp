You are given an array 'ARR' of size N. You have to construct a Product Array 'P' of the same size such that
P[i] is equal to the product of all the elements of ARR except ARR[il. The constraint is that you are not
allowed to use the division operator.
For Example:
For an array {1, 2, 3, 4, 5}:
The required product array generated from the given array is {120, 60, 40, 30, 24 }
This can be generated in the following manner:
For generating 120 we have 2 * 3 * 4 * 5 i.e. the product of other array elements except 1.
For generating 60 we have 1 * 3 * 4* 5
For generating 40 we have 1 * 2 * 4* 5
For generating 30 we have 1 * 2 * 5
For generating 24 we have 1 * 2 * 3 * 4
i.e. the product of other array elements except 2.
i.e. the product of other array elements except 3.
i.e. the product of other array elements except 4.
i.e. the product of other array elements except 5.
Sample Input 1:
2
5
10 3 5 6 2
2
12 20
Sample Output 1:
180 600 360 300 900
20 12
Explanation:
Test Case 1: 
For the product array P,
At i=0 we have 3*5*6*2 = 180.
At i=1 we have 10*5*6*2 = 600. 
At i=2 we have 10*3*6*2 = 360. 
At i=3 we have 10*3*5*2 = 300. 
At i=4 we have 10*3*5*6 = 900
So, the P array is 180 600 360 300 900

Test Case 2: 
For the product array P, 
At i=0, we have 20. 
At i=1, we have 12.
So, the P array is 20 12. 
Answer:
vector<long long> getProductArray(int arr[], int n)
{
   vector<long long> result(n, 1); 

    if (n == 1) {
        return {0}; 
    }

    vector<long long> left(n, 1);
    vector<long long> right(n, 1); 

  
    for (int i = 1; i < n; ++i) {
        left[i] = left[i - 1] * arr[i - 1];
    }

  
    for (int i = n - 2; i >= 0; --i) {
        right[i] = right[i + 1] * arr[i + 1];
    }

   
    for (int i = 0; i < n; ++i) {
        result[i] = left[i] * right[i];
    }

    return result;
}

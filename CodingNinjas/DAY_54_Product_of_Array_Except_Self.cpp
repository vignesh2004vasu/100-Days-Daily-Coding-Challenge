You have been given an integer array/list (ARR) of size N. You have to return an array/list PRODUCT such
hat PRODUCT [i] is equal to the product of all the elements of ARR except ARR[i]
Sample Input 1 :
2
3
1 2 3
3
5 2 2
Sample Output 1 :
6 3 2
4 10 10
Explanation for Sample Output 1 :
 Test case 1 : Given array = {1, 2, 3] 
 Required array = [2 * 3, 1 * 3, 1 * 2] = [6, 3, 2]
 Test case 2 : Given array = {5, 2, 2] 
 Required array = [2 * 2, 5 * 2, 5 * 2] = [4, 10, 10]
Sample Input 2 :
2
1
100
2
1 2
Sample Output 2 :
1
2 1
Answer:
int *getProductArrayExceptSelf(int *arr, int n)
{
    vector<int> result(n, 1); 

    int leftProduct = 1;
    
    for (int i = 0; i < n; i++) {
        result[i] *= leftProduct;
        leftProduct *= arr[i];
    }

    int rightProduct = 1;
   
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= arr[i];
    }


    int* output = new int[n];
    for (int i = 0; i < n; ++i) {
        output[i] = result[i];
    }

    return output;
}

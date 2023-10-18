Watson gives Sherlock an array of integers. 
His challenge is to find an element of the array such that the sum of all elements to the left 
is equal to the sum of all elements to the right.

Example
Arr=[5,6,8,11]
 8 is between two subarrays that sum to 11.
Arr=[1]
The answer is [1] since left and right sum to 0.

You will be given arrays of integers and must determine whether there is an element that meets the criterion.
If there is, return YES. Otherwise, return NO.

class Result {

   
    public static String balancedSums(List<Integer> arr) {
        int totalSum = 0;
        int leftSum = 0;

        for (int num : arr) {
            totalSum += num;
        }

        for (int i = 0; i < arr.size(); i++) {
            totalSum -= arr.get(i); 
            if (leftSum == totalSum) {
                return "YES"; 
            }
            leftSum += arr.get(i); 
        }
        
        return "NO"; 
    }

}

Given an array of integers. Find if there is a subarray (of size at-least one) with 0 sum.
You just need to return true/false depending upon whether there is a subarray present with 0-sum or not.


Example 1:

Input:
n = 5
arr = {4,2,-3,1,6}
Output: 
Yes
Explanation: 
2, -3, 1 is the subarray with sum 0.
Example 2:

Input:
n = 5
arr = {4,2,0,1,6}
Output: 
Yes
Explanation: 
0 is one of the element in the array so there exist a subarray with sum 0.

Answer:
class Solution{
    public:
 
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> sumSet;
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            sum += arr[i];

            if (sum == 0 || sumSet.find(sum) != sumSet.end()) {
                return true;
            }

            sumSet.insert(sum);
        }

        return false;
        
    }
};
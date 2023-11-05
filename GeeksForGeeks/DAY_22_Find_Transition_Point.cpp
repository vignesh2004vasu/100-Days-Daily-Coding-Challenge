Given a sorted array containing only 0s and 1s, find the transition point,
i.e., the first index where 1 was observed, and before that, only 0 was observed.
Example 1:
Input:
N = 5
arr[] = {0,0,0,1,1}
Output: 3
Explanation: index 3 is the transition 
point where 1 begins.
  
Example 2:
Input:
N = 4
arr[] = {0,0,0,0}
Output: -1
Explanation: Since, there is no "1",
the answer is -1.

Answer:
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        int left = 0;
        int right = n - 1;
    
        while (left <= right) {
            int mid = left + (right - left) / 2;
    
            if (arr[mid] == 1 && (mid == 0 || arr[mid - 1] == 0)) {
                return mid;
            } else if (arr[mid] == 1) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
    
        
        return -1;
    }
};

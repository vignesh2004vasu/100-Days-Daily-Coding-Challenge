Given an array of N integers arr[] where each element represents the maximum length of the jump that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.

Note: Return -1 if you can't reach the end of the array.


Example 1:

Input:
N = 11 
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
Output: 3 
Explanation: 
First jump from 1st element to 2nd 
element with value 3. Now, from here 
we jump to 5th element with value 9, 
and from here we will jump to the last. 
Example 2:

Input :
N = 6
arr = {1, 4, 3, 2, 6, 7}
Output: 2 
Explanation: 
First we jump from the 1st to 2nd element 
and then jump to the last element.

Answer:

class Solution{
  public:
    int minJumps(int arr[], int n){
        if (n <= 1) return 0;
        if (arr[0] == 0)
            return -1;
        
        int maxReach = arr[0];
        int steps = arr[0];
        int jumps = 1;
        
        for (int i = 1; i < n; ++i) {
            if (i == n - 1) 
                return jumps;
            
            maxReach = max(maxReach, i + arr[i]);
            steps--;
            
            if (steps == 0) {
                jumps++;
                
                if (i >= maxReach) 
                    return -1;
                steps = maxReach - i;
            }
        }
        
        return -1;
    }
};

Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.

 

Example 1:

Input: arr = [1,2,2,6,6,6,6,7,10]
Output: 6
Example 2:

Input: arr = [1,1]
Output: 1
Answer:
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size = arr.size();
        int qtr = size / 4;
        int cnt = 1;
        int p = arr[0];
        for (int i = 1 ; i < arr.size() ; i++) {

            if ( p == arr[i])
                 cnt++;
            else
                 cnt = 1;
            
            if (cnt > qtr)
                 return arr[i];
            
            p = arr[i];
        }

        return p;
        
    }
};
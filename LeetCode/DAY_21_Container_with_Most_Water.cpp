You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
  
Example 2:
Input: height = [1,1]
Output: 1
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;

        while (left < right) {
            int area = min(height[left], height[right]) * (right - left);
            max_area = max(max_area, area);

            if (height[left] < height[right]) {
                left++;
            } 
            else {
                right--;
            }
        }

        return max_area;
        
    }
};
 

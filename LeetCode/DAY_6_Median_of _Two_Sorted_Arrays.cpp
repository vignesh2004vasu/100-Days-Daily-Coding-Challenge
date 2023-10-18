Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 
Answer:
#include<bits/stdc++.h>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int t = n + m;
        int arr[t];
        for(int i = 0; i < n; i++) {
            arr[i] = nums1[i];
        }
        for(int i = n, j = 0; i<t &&j < m; i++, j++) {
            arr[i] = nums2[j];
        }

        for(int i = 0; i < t; i++) {
            cout<<arr[i]<<" ";
        }

        sort(arr,arr+t);

        if (t % 2 == 0) {
            
            return (arr[t / 2 - 1] + arr[t / 2]) / 2.0;
        }
         else {
            return arr[t / 2];
        }
    }       
};

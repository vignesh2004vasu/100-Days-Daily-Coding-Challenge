You have been given an integer array/list(ARR) of size 'N'. It only contains Os, Is
and 2s. Write a solution to sort this array/list.
Answer:
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
     int low = 0;     
     int mid = 0;     
     int high = n - 1;  

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

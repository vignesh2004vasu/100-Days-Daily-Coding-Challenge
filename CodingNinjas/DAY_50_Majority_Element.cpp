You have been given an array/list 'ARR' consisting of 'N' integers. Your task is to
find the majority element in the array. If there is no majority element present,
print -1.
Note:
A majority element is an element that occurs more than floorCN' / 2) times in the
array.
Sample Input 1:
2
5
2 3 9 2 2
4
8 5 1 9 
Sample Output 1:
2
-1
Explanation of Sample Output 1:
In test case 1, frequencies of occurrences of different elements are:

2 → 3 times
3 → 1 time
9 → 1 time

As 2 occurs more than floor(5/2) (i.e. floor(2.5) = 2) times, it is the majority element.

In test case 2, frequencies of occurrences of different elements are:

8 → 1 time
5 → 1 time
1 → 1 time
9 → 1 time

As no element occurs more than floor(4/2) = 2 times. Thus No majority element is present.

Answer:
#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int candidate = -1, count = 0;
    
 
    for (int i = 0; i < n; ++i) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (candidate == arr[i]) {
            count++;
        } else {
            count--;
        }
    }
    
    if (count > 0) {
        count = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] == candidate) {
                count++;
            }
        }
    }
    
   
    return (count > n / 2) ? candidate : -1;
}

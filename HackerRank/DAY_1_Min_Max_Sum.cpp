// Given five positive integers,
// find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
// Then print the respective minimum and maximum values as a single line of two space-separated long integers.

// Sample 1

// The array =[1,3,5,7,9]
// The minimum sum is 16 
// and the maximum sum is 14
// The function prints
// 16 24

// Answer:

#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int64_t> integers(5);
      
    for (int i = 0; i < 5; i++) {
        cin >> integers[i];
    }
    
    sort(integers.begin(), integers.end());
   
    int64_t minSum = integers[0] + integers[1] + integers[2] + integers[3];
    int64_t maxSum = integers[1] + integers[2] + integers[3] + integers[4];
  
    cout<< minSum<<" "<<maxSum<<endl;
    
    return 0;
}







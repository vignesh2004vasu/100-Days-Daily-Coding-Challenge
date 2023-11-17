Write a program to count the number of I's in the binary representation of an integer.
Sample Input 1:
9
Sample Output 1:
2
Explanation of Sample Input 1:
Binary Representation of 9 is 1001.
Sample Input 2:
13
Sample Output 2:
3
Answer:
#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

int countBits(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}


int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}

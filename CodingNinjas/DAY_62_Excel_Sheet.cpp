You are given a string STR representing the column title in an Excel Sheet. You need to find its corresponding
column number.
For example: A corresponds to 1, B to 2, C to 3, , Z to 26, AA to 27, and so on.

Sample Input 1:
3
A
AB
F
Sample Output 1:
1
28
6
Explanation of Input 1:
The first test case, STR = “A”. This corresponds to column number 1.

The second test case, STR = “AB”. This corresponds to column number 28.

The third test case, STR = “F”. This corresponds to column number 6.
Sample Input 2:
3
AZ
COD
ZZZ
Sample Output 2
52
2422
18278

Answer:
#include <bits/stdc++.h> 
long long titleToNumber(string str) {
    
     long long columnNumber = 0;
    for (char c : str) {
        columnNumber = columnNumber * 26 + (c - 'A' + 1);
    }
    return columnNumber;
}
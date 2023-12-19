Ninja has been given a binary string 'STR' containing either 'O' or A binary string is called beautiful if it
contains alternating 0s and Is.
For Example:'0101', '1010', • 101', '010' are beautiful strings.
He wants to make 'STR' beautiful by performing some operations on it. In one operation, Ninja can convert
'O' into '1' or vice versa.
Your task is to determine the minimum number of operations Ninja should perform to make 'STR' beautiful.
For Example :
Minimum operations to make 'STR' '0010' beautiful is In one operation, we can convert 'O' at index 'O' (O-
based indexing) to The 'STR' now becomes '1010' which is a beautiful string.

Sample Input 1 :
2
0000
1010
Sample Output 1 :
2
0
Explanation of Sample Input 1 :
For the first test case:
The two beautiful strings that can be formed from the given ‘STR’ 
are “1010” and “0101”. Ninja can transform ‘STR’ to “1010” by 
performing the following operations:
Replace ‘0’ at index 0 by ‘1’.
Replace ‘0’ at index 2 by ‘1’.

Ninja can transform ‘STR’ to “0101” by performing the following 
operations:
Replace ‘0' at index 1 by ‘1’.
Replace ‘0’ at index 3 by ‘1’.

The minimum number of operations in transforming ‘STR’ to either of the two beautiful strings is 2.

For the second test case:
Given ‘STR’ is already beautiful so the minimum number of operations required is 0.
Sample Input 2 :
2
01011
1001
Sample Output 2 :
1
2
Explanation of Sample Input 2 :
For the first test case:
The two beautiful strings that can be formed from the given ‘STR’ are “10101” and “01010”. Ninja can transform ‘STR’ to “10101” by performing the following operations:
Replace ‘0’ at index 0 by ‘1’.
Replace ‘1’ at index 1 by ‘0’.
Replace ‘0’ at index 2 by ‘1’
Replace ‘1’ at index 4 by ‘0’.

Ninja can transform ‘STR’ to “01010” by performing the following operations:
Replace ‘1’ at index 4 by ‘0’.

The minimum number of operations in transforming ‘STR’ to beautiful is the minimum of the above two which is 1.

For the second test case:
The two beautiful strings that can be formed from the given ‘STR’ are “1010” and “0101”. Ninja can transform ‘STR’ to “1010” by performing the following operations:
Replace ‘0’ at index 2 by ‘1’.
Replace ‘1’ at index 3 by ‘0’.

Answer:
int makeBeautiful(string str) {
	 int count1 = 0, count2 = 0;
    
    
    for (int i = 0; i < str.length(); i++) {
        if (i % 2 == 0) {
            if (str[i] != '0') {
                count1++;
            } else {
                count2++;
            }
        } else {
            if (str[i] != '1') {
                count1++;
            } else {
                count2++;
            }
        }
    }
    
    return min(count1, count2);
}
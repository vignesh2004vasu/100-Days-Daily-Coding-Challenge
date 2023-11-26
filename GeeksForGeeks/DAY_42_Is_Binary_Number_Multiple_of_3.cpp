Given a number in its binary form find if the given binary number is a multiple of 3. 
It is recommended to finish the task using one traversal of input binary number.
Example 1:

Input: S = "0011"
Output: 1
Explanation: "0011" is 3, which is divisible by 3.
Example 2:

Input: S = "100"
Output: 0
Explanation: "100"'s decimal equivalent is 4, which is not divisible by 3.
Answer:
class Solution{
public:	
		
	int isDivisible(string s){
	    int n = s.length();
        int ones = 0, zeros = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            if (i % 2 == 0) {
                ones++;
            } else {
                zeros++;
            }
        }
    }

    int diff = ones - zeros;
    return (diff % 3 == 0) ? 1 : 0;
	}

};

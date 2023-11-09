Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.
Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.
Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"
Example 2:

Input: num1 = "123", num2 = "456"
Output: "56088"
Answer:
class Solution {
public:
    string multiply(string num1, string num2) {
        int a = num1.size();
        int b = num2.size();
        
        string res(a+b, '0');

        for(int i=a-1; i>=0; i--) {
            for(int j=b-1; j>=0; j--) {
                int di = (num1[i] - '0') * (num2[j] - '0') + (res[i+j+1]-'0');
                res[i+j+1] = di % 10 + '0';
                res[i+j] += di/10;
            }
        }

       
        for(int i=0; i<res.size(); i++) {
            if(res[i]!='0') return res.substr(i);
        }
        return "0";
    }
};

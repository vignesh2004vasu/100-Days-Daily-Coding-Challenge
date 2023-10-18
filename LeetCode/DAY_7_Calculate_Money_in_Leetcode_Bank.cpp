Hercy wants to save money for his first car. He puts money in the Leetcode bank every day.
He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday, he will put in $1 more than the day before.
On every subsequent Monday, he will put in $1 more than the previous Monday.
Given n, return the total amount of money he will have in the Leetcode bank at the end of the nth day.

Example 1:

Input: n = 4
Output: 10
Explanation: After the 4th day, the total is 1 + 2 + 3 + 4 = 10.
Example 2:

Input: n = 10
Output: 37
Explanation: After the 10th day, the total is (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4) = 37. 
Notice that on the 2nd Monday, Hercy only puts in $2.

Answer:
class Solution {
public:
     int totalMoney(int n) {
        int total = 0;
        int daily_savings = 1;
        int monday_increment = 0;
        
        for (int i = 1; i <= n; i++) {
            total += daily_savings+monday_increment;
            if (i % 7 == 0) {
                monday_increment++;
                daily_savings=1;
            }
            else
                daily_savings++;
        }
        
        return total;
    }
};

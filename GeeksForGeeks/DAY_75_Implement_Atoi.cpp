Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.

Note: You are not allowed to use inbuilt function.

Example 1:

Input:
str = 123
Output: 123
Example 2:

Input:
str = 21a
Output: -1
Explanation: Output is -1 as all
characters are not digit only.


class Solution{
  public:
  
    int atoi(string str) {
        int result = 0;
        int sign = 1; 
    
        int i = 0;
        
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r') {
            i++;
        }
    
      
        if (str[i] == '-') {
            sign = -1;
            i++;
        } else if (str[i] == '+') {
            i++;
        }
    
        
        while (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
            i++;
        }
    
     
        while (str[i] != '\0') {
            if (str[i] < '0' || str[i] > '9') {
                return -1; 
            }
            i++;
        }
    
        return result * sign;
    }
};
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

Sample :
Input: s = "()[]{}"
Output: true

Input: s = "(]"
Output: false

Answer:
class Solution {
public:
    bool isValid(string s) {

        stack<char> str;
        for(char c: s)
        {
            if (c == '(' || c == '{' || c == '[') 
                str.push(c);
        else if (c == ')' || c == '}' || c == ']') {
            if (str.empty()) {
                return false;  
            }
            char open = str.top();
            str.pop();

            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                return false; 
            }
        }
           
         }
          return str.empty();  

        
    }
};

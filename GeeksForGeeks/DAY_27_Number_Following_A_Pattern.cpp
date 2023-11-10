Given a pattern containing only I's and D's. I for increasing and D for decreasing.
Devise an algorithm to print the minimum number following that pattern. Digits from 1-9 and digits can't repeat.

Example 1:

Input:
D
Output:
21
Explanation:
D is meant for decreasing, so we choose the minimum number among all possible numbers like 21,31,54,87,etc.
Example 2:

Input:
IIDDD
Output:
126543
Explanation:
Above example is self- explanatory,
1 < 2 < 6 > 5 > 4 > 3
  I - I - D - D - D
Answer:
class Solution{   
public:
    string printMinNumberForPattern(string S){
        vector<int> result;
        stack<int> stack;

    for (int i = 0; i <= S.size(); ++i) {
        stack.push(i + 1);

        if (i == S.size() || S[i] == 'I') {
            while (!stack.empty()) {
                result.push_back(stack.top());
                stack.pop();
            }
        }
    }

    string result_str;
    for (int num : result) {
        result_str +=to_string(num);
    }

    return result_str;
    }
};

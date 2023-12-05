Our geek loves to play with strings, Currently, he is trying to reduce the size of a string by recursively removing all the consecutive duplicate pairs. In other words, He can apply the below operations any number of times.

Remove all the consecutive duplicate pairs and concatenate the remaining string to replace the original string.
Your task is to find the string with minimum length after applying the above operations.

Note: If the string length become zero after applying operations, return "-1" as a string.


Example 1:

Input:
aaabbaaccd
Output: 
ad
Explanation: 
Remove (aa)abbaaccd =>abbaaccd
Remove a(bb)aaccd => aaaccd
Remove (aa)accd => accd
Remove a(cc)d => ad
Example 2:

Input: 
aaaa
Output: 
Empty String
Explanation: 
Remove (aa)aa => aa
Again removing pair of duplicates then (aa) 
will be removed and we will get 'Empty String'.
Answer:
class Solution {
  public:
    string removePair(string s) {
        string stack;
        for (char c : s) {
            if (!stack.empty() && c == stack.back()) {
                stack.pop_back();
            } else {
                stack.push_back(c);
            }
        }
        string reduced = stack;
        while (reduced.length() < s.length()) {
            s = reduced;
            stack.clear();
            for (char c : s) {
                if (!stack.empty() && c == stack.back()) {
                    stack.pop_back();
                } else {
                    stack.push_back(c);
                }
            }
            reduced = stack;
        }
        return reduced.empty() ? "-1" : reduced;
    }
};

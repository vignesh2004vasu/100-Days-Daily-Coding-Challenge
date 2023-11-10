Reverse a given stack of 'N' integers using recursion. You are required to make
changes in the input parameter itself.
Sample Input 1 :
3
2 1 3
Sample Output 1 :
3 1 2
Explanation to Sample Input 1 :
Reverse of a give stack is 3 1 2 where first element becomes last and last becomes first.                   
Sample Input 2 :
2
3 2
Sample Output 2 :
2 3
Answer:
#include<bits/stdc++.h>

void insertAtBottom(stack<int>& s, int item) {
    if (s.empty()) {
        s.push(item);
        return;
    }

    int topItem = s.top();
    s.pop();
    insertAtBottom(s, item);
    s.push(topItem);
}

void reverseStack(stack<int>& s) {
    if (!s.empty()) {
        int item = s.top();
        s.pop();
        reverseStack(s);
        insertAtBottom(s, item);
    }
}

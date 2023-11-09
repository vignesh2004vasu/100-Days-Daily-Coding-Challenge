You're given a stack consisting of 'N' integers. Your task is to sort this stack in
descending order using recursion.
We can only use the following functions on this stack S.
is_empty(S)
. Tests whether stack is empty or not.
push(S) . Adds a new element to the stack.
pop(S) . Removes top element from the stack.
top(S) . Returns value of the top element.
Note that this function does not remove elements from the stack.
Sample Input 1:
1
5
5 -2 9 -7 3
Sample Output 1:
9 5 3 -2 -7
Explanation of Sample Input 1:
9 Is the largest element, hence it’s present at the top. Similarly 5>3, 3>-2 and -7 being the smallest element is present at the last. 
Answer:

#include<bits/stdc++.h>
void insertIntoSortedStack(stack<int>& stack, int element) {
  if (stack.empty() || stack.top() <= element) {
    stack.push(element);
    return;
  }

  int topElement = stack.top();
  stack.pop();
  insertIntoSortedStack(stack, element);
  stack.push(topElement);
}
void sortStack(stack<int>& stack) {

  if (stack.empty()) {
    return;
  }


  int topElement = stack.top();
  stack.pop();

  sortStack(stack);

  insertIntoSortedStack(stack, topElement);
}


You are given a stack/deque of integers 'MY-STACK' and an integer ‘X’. Your task is to insert ‘X’ to the bottom of ‘MY-STACK’ and return the updated stack/deque.

Note :
If ‘MY_STACK’ = [7, 1, 4, 5], then the first element represents the element at the bottom of the stack and the last element represents the element at the top of the stack.

Sample input 1 :
2
3 8
4 3 2
4 5
6 2 4 9
Sample Output 1 :
8 4 3 2
5 6 2 4 9

Answer:
#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
     stack<int> tempStack;

    
    while (!myStack.empty()) {
        tempStack.push(myStack.top());
        myStack.pop();
    }

  
    myStack.push(x);

   
    while (!tempStack.empty()) {
        myStack.push(tempStack.top());
        tempStack.pop();
    }

    return myStack;
}

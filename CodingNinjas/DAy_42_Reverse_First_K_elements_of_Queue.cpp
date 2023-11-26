You are given a QUEUE containing 'N' integers and an integer 'K'. You need to
reverse the order of the first 'K' elements of the queue, leaving the other
elements in the same relative order.
You can only use the standard operations of the QUEUE STL:
1. enqueue(x) : Adds an item x to rear of the queue
2. dequeue() : Removes an item from front of the queue
3. size() : Returns number of elements in the queue.
4. front() : Finds the front element.
Sample Input 1:
2
5 3
1 2 3 4 5
4 2
6 2 4 1
Sample Output 1:
3 2 1 4 5
2 6 4 1
Explanation:
For test case 1: Refer to the example explained above.

For test case 2:
The queue after reversing the first 2 elements i.e., 6 and 2 will be { 2, 6, 4, 1 }.
Sample Input 2:
2
5 2
5 3 2 6 4
4 4
1 2 3 4
Sample Output 2:
3 5 2 6 4
4 3 2 1
Answer:
#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> s;


    for (int i = 0; i < k; ++i) {
        s.push(q.front());
        q.pop();
    }


    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

  
    int size = q.size();
    for (int i = 0; i < size - k; ++i) {
        q.push(q.front());
        q.pop();
    }

    return q;
}



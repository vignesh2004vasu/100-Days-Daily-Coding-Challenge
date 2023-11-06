Given a singly linked list of integers. Your task is to return the head of the
reversed linked list.
For example:
The given linked list is 1 -> 2 -> 3 -> 4 ->NULL
Then the reverse linked list is 4-> 3 -> 2 ->1 -> NULL and the head of the reversed list will be 4
Sample Input 1 :
1
1 2 3 4 5 6 -1
Sample Output 1 :
6 5 4 3 2 1 -1
Sample Input 2 :
1
10 21 3 2 4 -1
Sample Output 2 :
4 2 3 21 10 -1



/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

#include <bits/stdc++.h>
template <typename T>
LinkedListNode<T> *reverseLinkedList(LinkedListNode<T> *head) {
    LinkedListNode<T> *prev = nullptr;
    LinkedListNode<T> *current = head;
    LinkedListNode<T> *next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev; 
}

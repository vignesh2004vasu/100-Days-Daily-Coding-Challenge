You are given a singly linked list containing •n' nodes, where every node in the
linked list contains a pointer "next" which points to the next node in the list and
having values either O or 1. Your task is to return the decimal representation of
the given number in the linked list.
For Example:
n 4, list: 1 -> O -> 1 -> O.
Now in this example, the value in the linked list is 1010, which is 10 in Decimal.
Hence the answer is 10.
Sample Input 1 :
2
3
1 0 1 -1
2
1 1 -1   
Sample Output 1 :
5
3
Explanation For Sample Output 1 :
In the first test case, there are two paths from 1 to 3. I.e. 1 -> 2 -> 3 or 1 -> 0 -> 3 and both these paths have no common track.
Hence the answer is 0.

In the second test case, there are two different paths from 1 to 0. i.e. , 1 -> 2 -> 3 -> 6 -> 0 and 1 -> 2 -> 4 -> 6 -> 0. Having two common tracks, 1 -> 2 and 6 -> 0.
Hence the answer is 2.
Answer:

int binaryToInteger(int n, Node *head) {
    int result = 0;
    Node* current = head;

    
    while (current != nullptr) {
        result = (result << 1) + current->data; 
        current = current->next;
    }

    return result;
}

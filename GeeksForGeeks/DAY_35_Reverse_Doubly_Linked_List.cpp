Given a doubly linked list of n elements. Your task is to reverse the doubly linked list in-place.

Example 1:

Input:
LinkedList: 3 <--> 4 <--> 5
Output: 5 4 3
Example 2:

Input:
LinkedList: 75 <--> 122 <--> 59 <--> 196
Output: 196 59 122 75
ANswer:
/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        Node *current = head;
        Node *prevNode = NULL;

        while (current != NULL)
        {
            
            Node *nextNode = current->next;
            current->next = prevNode;
            current->prev = nextNode;

 
            prevNode = current;
            current = nextNode;
        }

        head = prevNode;
        return head;
    }
};

Given the head of a sorted linked list, delete all duplicates such that each element appears only once. 
Return the linked list sorted as well.
 Example 1:


Input: head = [1,1,2]
Output: [1,2]
Example 2:


Input: head = [1,1,2,3,3]
Output: [1,2,3]
Answer:
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL  ||  head->next==NULL)
             return head;

        ListNode*prev=NULL;
        ListNode*temp=NULL;
        ListNode*curr=head;

        while(curr!=NULL){
            if(prev==NULL){
                prev=curr;
                temp=prev;
                curr=curr->next;
                continue;
            }
            if(curr->val == prev->val){
                curr=curr->next;
                if(curr==NULL) 
                    prev->next=NULL;
            }
            else{
                prev->next=curr;
                prev=curr;
                curr=curr->next;
            }
        }
        return temp;
        
    }
};

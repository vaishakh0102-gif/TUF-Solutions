/**
class ListNode
{
 * Definition for doubly-linked list.
 *  public:
 *      int data;
 *      ListNode *prev;
 *      ListNode *next;
 *      ListNode() : data(0), prev(nullptr), next(nullptr) {}
 *      ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
 *      ListNode(int x, ListNode *prev, ListNode *next) : data(x), prev(prev), next(next) {}
};
*/

class Solution {
public:
    void deleteGivenNode(ListNode *node) {
        // Your code goes here
        
        // ListNode *head=node->prev;
        // ListNode *back=head;
        // ListNode *temp=head->next;
        // while(temp !=node){
        //     back=temp;
        //     temp=temp->next;

        // }
        // if(temp->next !=NULL){
        //     back->next=temp->next;
        //     temp->next->prev=back;

        // }
        // else back->next=nullptr;
        
        
        // free (temp);
        ListNode *back=node->prev;
        ListNode *front=node->next;
        if(front==NULL){
            back->next=nullptr;
            free (node);
            return;

        }
        back->next=front;
        front->prev=back;
        node->next=node->prev=nullptr;
        return;



    }
};
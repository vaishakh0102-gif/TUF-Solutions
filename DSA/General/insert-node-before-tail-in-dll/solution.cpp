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
    ListNode* insertBeforeTail(ListNode* head, int X) {
        // if(head==NULL || head->next==NULL){
        //     if(head==NULL){
        //         return new ListNode(X);
                
        //     }
        //     head->prev=new ListNode(X,nullptr,head);
        //     return head->prev;
        // }
            
        // ListNode *temp=head;
        // while(temp->next->next!=NULL){
        //     temp=temp->next;
        // }
        // ListNode *x=new ListNode(X,nullptr,temp->next);
        // x->prev=temp;
        

       
        // x->next->prev=x;
        // temp->next=x;

        
        // return head;
        if (head == nullptr) return nullptr;

    // If only one node exists, inserting before tail means inserting as new head
    if (head->next == nullptr) {
        ListNode* newHead = new ListNode(X, nullptr, head);
        head->prev = newHead;
        return newHead;
    }

    // Traverse to the tail node
    ListNode* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    // Link the new node between (tail->prev) and (tail)
    ListNode* back = tail->prev;
    ListNode* newNode = new ListNode(X, back, tail);

    back->next = newNode;
    tail->prev = newNode;

    return head;
        


         
        // Your code goes here
    }
};

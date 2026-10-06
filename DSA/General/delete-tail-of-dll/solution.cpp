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
    ListNode *deleteTail(ListNode *&head) {
        // if(head==NULL || head->next == NULL)return NULL;
        // ListNode *temp=head;
        // while(temp->next->next!=NULL){
        //     temp=temp->next;

        // }
        // temp->next=nullptr;
        // free (temp->next);
        // return head;
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
        }

        ListNode* move= tail->prev;
        move->next = nullptr;
        tail->prev = nullptr;

        delete tail; 
        return head;
        
        

        // Your code goes here
    }
    
};
/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode* middleOfLinkedList(ListNode* head) {
        // if(head==NULL || head->next==NULL)return head;
        // ListNode* temp = head;
        // ListNode *fast=temp->next->next;
        // ListNode *slow=temp->next;
        // while(fast!=NULL && fast->next!=NULL){
        //     fast=fast->next->next;
        //     slow=slow->next;
            
        // }
        // return slow;
        int count = 0;
        ListNode* temp = head;

        // Pass 1: count nodes
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Pass 2: find middle node
        int mid = count / 2;
        temp = head;
        while (mid > 0) {
            temp = temp->next;
            mid--;
        }

        return temp;
        

        

    }
};
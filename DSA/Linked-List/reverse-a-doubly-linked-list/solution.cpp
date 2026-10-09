/*
class ListNode {
public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};
*/

class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {
        if(head==nullptr || head->next==nullptr)return head;
        ListNode *back=nullptr;
        ListNode *temp=head;
       
        while(temp!=nullptr){
            ListNode *front=temp->next;

            
            temp->next=back;
            temp->prev=front;
            back=temp;
            temp=front;
            
        }
        return back;
        // Your code goes here
    }
};
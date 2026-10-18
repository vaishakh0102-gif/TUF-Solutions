/*
Definition of doubly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};
*/

class Solution {
public:
    ListNode * deleteAllOccurrences(ListNode* head, int target) {
        if(head==NULL)return NULL;
        ListNode *temp=head;
        ListNode *back=nullptr;
        while(temp!=NULL){
            if(temp->val==target){
                if(back==nullptr){
                    head=temp->next;
                    delete temp;
                    temp=head;
                    if(head!=nullptr) head->prev=nullptr;
                   
                }
                else{
                    ListNode *front=temp->next;
                    back->next=front;
                    if(front!=NULL){
                        front->prev=back;
                        delete temp;
                        temp=front;

                    }
                    else{
                        back->next=nullptr;
                        delete temp;
                        temp=NULL;



                    }
                    
                   

                    
                }
                


            }
            else {
                back=temp;
                temp=temp->next;

            }
        }
        return head;


    }
};
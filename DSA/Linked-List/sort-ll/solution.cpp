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
    ListNode* sortList(ListNode* head) {
         if(head==NULL || head->next==NULL)return  head;
        bool swapped;
        do{
            swapped=false;
            ListNode *temp=head;
            ListNode *prev=NULL;

        
       
            while(temp->next!=NULL){
                ListNode *front=temp->next;
                if(temp->val>front->val){
                    temp->next=front->next;
                    front->next=temp;

                    if(temp==head)head=front;
                    else prev->next=front;
                    prev=front;
                    swapped=true;

                }
                else{
                    prev=temp;
                    temp=temp->next;

                }
            }

            
        }while(swapped);
        return head;

    }
};


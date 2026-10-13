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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL)return NULL;
        ListNode *temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
            

        }
        if (cnt==n)return head->next;
        temp=head;
        int num=0;
        while(temp->next!=NULL){
            num++;
            if(num==cnt-n){
                temp->next=temp->next->next;
                break;

            }
            temp=temp->next;
            
            
        }
        return head;
        

    }
};
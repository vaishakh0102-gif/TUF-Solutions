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
private:
    ListNode *findnode(ListNode* head,int x){
        ListNode *temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            if(cnt==x)return temp;
            temp=temp->next;
        }
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)return head;
        // different method
        ListNode *temp=head;
        int cnt=1;
        while(temp->next!=NULL){
            cnt++;
            temp=temp->next;

        }
        if(k%cnt==0)return head;
        k=k%cnt;
        temp->next=head;

        ListNode *newLastnode=findnode(head,cnt-k);
        head=newLastnode->next;
        newLastnode->next=NULL;
        return head;

       
        

    }
};
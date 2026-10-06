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
    ListNode *deleteKthElement(ListNode *&head, int k) {
        if(head==NULL || head->next ==NULL)return NULL;
            if(k==1){
                ListNode* temp=head;
                head=head->next;
                head->prev=nullptr;
                free(temp);
                return head;

            }
            int cnt=0;
            ListNode* temp=head;
            ListNode* move=NULL;
            while(temp!=NULL){
                cnt++;
                if(cnt==k){
                    move->next=temp->next;
                    if(temp->next!=NULL){
                        temp->next->prev=move;

                    }
                    free (temp);
                    break;
                }
                move=temp;
                temp=temp->next;
            }
            return head;
        // Your code goes here
    }
};
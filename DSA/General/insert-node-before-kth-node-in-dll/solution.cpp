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
    ListNode* insertBeforeKthPosition(ListNode* head, int X, int K) {
       
        if(head==NULL){
            return new ListNode(X);
            
        }
                
            
        
        
        if (K==1) {
            ListNode* x = new ListNode(X, nullptr, head);
            head->prev = x;
            return x;
        }
        ListNode *temp=head;
        int cnt=0;
        
        while(temp!=nullptr){
            cnt++;
            if(cnt==K-1){
                ListNode *x=new ListNode(X,temp,temp->next);
                
                if(temp->next!=nullptr){
                    temp->next->prev=x;
                }
                temp->next=x;
                break;
            }
            temp=temp->next;

        }
        return head;


        // Your code goes here
    }
};
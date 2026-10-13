/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
    public:
        ListNode* sortList(ListNode* &head) {
            if(head==nullptr || head->next==nullptr)return head;
            ListNode *temp=head;

            ListNode *zerohead=new ListNode(-1);
            ListNode *zero=zerohead;
            ListNode *onehead=new ListNode(-1);
            ListNode *one=onehead;
            ListNode *twohead=new ListNode(-1);
            ListNode *two=twohead;
            while(temp!=nullptr){
                if(temp->data==0){
                    zero->next=temp;
                    zero=temp;
                }
                else if (temp->data==1){
                    one->next=temp;
                    one=temp;
                    
                }
                else  {
                    two->next=temp;
                    two=temp;

                }
                temp=temp->next;
            }
            zero->next=(onehead->next)?(onehead->next):(twohead->next);
            one->next=twohead->next;
            two->next=nullptr;
            ListNode *newhead=zerohead->next;
            // free (zerohead);
            // free (onehead);
            // free (twohead);
            
           

            return newhead; 

            
            

            //your code goes here
        }
};
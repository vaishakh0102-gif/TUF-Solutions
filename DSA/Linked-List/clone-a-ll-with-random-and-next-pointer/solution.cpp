/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *random;
    ListNode()
    {
        val = 0;
        next = NULL;
        random = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        random = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode* r)
    {
        val = data1;
        next = next1;
        random = r;
    }
};
*/

class Solution {
public:
    ListNode* copyRandomList(ListNode* head) {
        if (!head) return NULL;

       
       ListNode* temp = head;
        while (temp != NULL) {
            ListNode* copyNode = new ListNode(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = temp->next->next;
        }

        
        temp = head;
        while (temp != NULL) {
            ListNode* copyNode = temp->next;
            if (temp->random != NULL) {
                copyNode->random = temp->random->next;
            } else {
                copyNode->random = NULL;
            }
            temp = temp->next->next;
        }

       ListNode* dNode = new ListNode(-1);
       ListNode* res = dNode;
        temp = head;

        while (temp != NULL) {
            res->next = temp->next;
            temp->next = temp->next->next;

            res = res->next;
            temp = temp->next;
        }

        return dNode->next;
    }

    
};
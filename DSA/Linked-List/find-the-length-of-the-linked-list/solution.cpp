class Solution {
public:
    int getLength(ListNode* head) {
        ListNode *temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        return cnt;

        // Your code goes here
    }
};
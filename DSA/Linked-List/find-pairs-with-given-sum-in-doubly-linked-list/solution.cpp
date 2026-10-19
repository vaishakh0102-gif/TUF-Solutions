/*
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode* prev; 

    ListNode(int value) : val(value), next(nullptr), prev(nullptr) {}

    ~ListNode() {
        delete next;
    }
};
*/

class Solution {
public:
    vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {
        vector<vector<int>>ans;
        ListNode *temp=head;
        while(temp!=nullptr){
            ListNode *front=temp->next;
            while(front!=nullptr){
                if(temp->val+front->val==target){
                    ans.push_back({temp->val,front->val});
                }
                front=front->next;
            }
            temp=temp->next;
        }
        return ans;
          
        // Your code goes here
    }
};
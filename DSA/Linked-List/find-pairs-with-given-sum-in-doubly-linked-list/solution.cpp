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
        // brute Solution
        // while(temp!=nullptr){
        //     ListNode *front=temp->next;
        //     while(front!=nullptr){
        //         if(temp->val+front->val==target){
        //             ans.push_back({temp->val,front->val});
        //         }
        //         front=front->next;
        //     }
        //     temp=temp->next;
        // }
        // return ans;
        

        // Optimal Solution
        if(head==nullptr|| head->next==nullptr)return ans;
        ListNode *front=head;
        ListNode *tail=head;
        while(tail->next!=nullptr)tail=tail->next;
        while(front->val < tail->val){
            if(front->val+tail->val==target){
                ans.push_back({front->val,tail->val});
                front=front->next;
                tail=tail->prev;

            }
            else if(front->val+tail->val<target){
                 front=front->next;
                
            }
            else {
                tail=tail->prev;

            }

        }
        return ans;
    }
};
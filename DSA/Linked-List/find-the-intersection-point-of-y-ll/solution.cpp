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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //brute Solution
        
        // unordered_map<ListNode*,int>mpp;
        // ListNode *temp=headA;
        // while(temp!=NULL){
        //     mpp[temp]=1;
        //     temp=temp->next;
        // }
        // temp=headB;
        // while(temp!=NULL){
        //     if(mpp.find(temp)!=mpp.end())return temp;
        //     temp=temp->next;
        // }
        // return NULL;

        // ListNode *temp1=headA;
        // int cnt1=0;
        // while(temp1!=NULL){
        //     cnt1++;
        //     temp1=temp1->next;

        // }
        // ListNode *temp2=headB;
        // int cnt2=0;
        // while(temp2!=NULL){
        //     cnt1++;
        //     temp2=temp2->next;

        // }
        // temp1=headA;
        // temp2=headB;
        // if (cnt1>cnt2){
        //     for(int i=0;<cnt1-cnt2;i++){
        //     temp1=temp1->next;

        // }
        // else {
        //     for(int i=0;<cnt2-cnt1;i++){
        //     temp2=temp2->next;
        // }
       
        // }
        // while (temp1!=NULL && temp2!=NULL){
        //     if(temp1==temp2)return temp2;
        //     temp1=temp1->next;
        //     temp2=temp2->next;

        // }
        // return NULL;
        // optimal Solution
        if(headA==NULL || headB==NULL)return NULL;
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
            if(temp1==temp2)return temp1;
            if(temp1==NULL)temp1=headB;
            if(temp2==NULL)temp2=headA;
        }
        return temp1;


    }
};
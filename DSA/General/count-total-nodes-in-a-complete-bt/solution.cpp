/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
    void count(TreeNode* root,int& cnt){
        if(root==nullptr)return;
        if(root->left){
            cnt++;
        
            count(root->left,cnt);
        }
        if(root->right){
            cnt++;
        
            count(root->right,cnt);
        }
    }
public:
    int countNodes(TreeNode* root) {
        if(root==nullptr)return 0;
        int cnt=1;
        count(root,cnt);
        return cnt;


        //your code goes here
    }
};
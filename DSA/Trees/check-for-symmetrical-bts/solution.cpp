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
    bool ismirror(TreeNode* p,TreeNode* q){
        if(p==nullptr && q==nullptr)return true;  
        if(p==nullptr || q==nullptr || p->data!=q->data)return false;

        return ismirror(p->left,q->right) && ismirror(p->right,q->left);

    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)return true;
        
        return ismirror(root->left,root->right);
        
        

        //your code goes here
    }
};
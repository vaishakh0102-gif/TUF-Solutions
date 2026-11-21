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
    int findHeight(TreeNode* node) {
        if (node == nullptr) return 0;
        int lh = findHeight(node->left);
        int rh = findHeight(node->right);
        return 1 + max(lh, rh);
    }
    void findMax(TreeNode* node,int&  maxi){
        if (node == nullptr) return;

        int lh = findHeight(node->left);
        int rh = findHeight(node->right);

        maxi = max(maxi, lh + rh);

        findMax(node->left, maxi);
        findMax(node->right, maxi);
    }
    
   
public:
    int diameterOfBinaryTree(TreeNode* root) {

       int maxi=0;
       findMax(root,maxi);
       return maxi;
    }
       

        //your code goes here
    
};
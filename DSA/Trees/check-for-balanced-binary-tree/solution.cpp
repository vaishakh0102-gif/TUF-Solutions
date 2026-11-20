/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
    int getHeight(TreeNode* node){
        if(node==nullptr)return true;
        int ls=getHeight(node->left);
        int rs=getHeight(node->right);
        return 1+max(ls,rs);


    }
public:
    bool isBalanced(TreeNode *root){
        if (root == nullptr) return true;

        int lh = getHeight(root->left);
        int rh = getHeight(root->right);

        if(abs(rh - lh) > 1) return false;

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

      

        if (!left || !right) return false;

        return true;
      
    	//your code goes here
    }
};
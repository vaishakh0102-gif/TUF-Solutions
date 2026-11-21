/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
public:
    bool checkChildrenSum(TreeNode* root) {
        if(root==NULL)return true;
        if (root->left == NULL && root->right == NULL) return true;
        int child=0;
        if(root->left!=NULL)child+=root->left->val;
        if(root->right!=NULL)child+=root->right->val;

        return (root->val==child) && checkChildrenSum(root->left)&& checkChildrenSum(root->right);
        // Your code goes here
    }
};

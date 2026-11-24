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
    void helper(TreeNode* node,vector<int>& ls,vector<vector<int>>&ans){
        if (node == nullptr){
            return;
        }
        

        ls.push_back(node->data);
        if(node->left==nullptr && node->right==nullptr){
            ans.push_back(ls);
            
        }

        helper(node->left,ls, ans);      
               
        helper(node->right,ls, ans);   
        ls.pop_back();
    }
	public:
		vector<vector<int>> allRootToLeaf(TreeNode* root) {
            vector<vector<int>>ans;
            vector<int>ls;
            helper(root,ls,ans);
            return ans;

            //your code goes here
		}
};
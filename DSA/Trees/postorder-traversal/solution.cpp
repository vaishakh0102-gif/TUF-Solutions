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
	public:
		vector<int> postorder(TreeNode* root){
            vector<int>ans;
            if(root==nullptr)return ans;
            stack<TreeNode*>st1,st2;
            
            st1.push(root);
            
            
            while(!st1.empty()){
                TreeNode* node=st1.top();
                st1.pop();
                st2.push(node);
               
                if(node->left!=nullptr)st1.push(node->left);
                if(node->right!=nullptr)st1.push(node->right);
                

            }
            while(!st2.empty()){
                ans.push_back(st2.top()->data);
                st2.pop();
            }
            return ans;
	        //your code goes here
		}
};
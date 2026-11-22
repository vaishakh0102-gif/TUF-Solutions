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
      void levelorder(TreeNode* node, int level, vector<vector<int>>& ans) {
        if (node==NULL) return;

        if (ans.size() == level) {
            ans.push_back({});
        }
        ans[level].push_back(node->data);
    
        levelorder(node->left, level + 1, ans);
        levelorder(node->right, level + 1, ans);


        
       
    }
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelorder(root, 0, ans);
        for(int i=1;i<ans.size();i+=2){
            reverse(ans[i].begin(),ans[i].end());
        }
        return ans;
        //your code goes here
    }
};
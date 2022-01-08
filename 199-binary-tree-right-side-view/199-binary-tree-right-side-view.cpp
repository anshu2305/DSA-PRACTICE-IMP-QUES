/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector <int> res;
        if(!root){
            return res;
        }
        queue <TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            int levelsize= q.size();
            int val;
            vector <int> currlevel;
            while(levelsize--){
                TreeNode *curr_node = q.front();
                q.pop();
                val = curr_node->val;
                if(curr_node->left) 
                    q.push(curr_node->left);
                if(curr_node->right) 
                    q.push(curr_node->right);
            }
            res.push_back(val);
        }
        return res;
    }
};
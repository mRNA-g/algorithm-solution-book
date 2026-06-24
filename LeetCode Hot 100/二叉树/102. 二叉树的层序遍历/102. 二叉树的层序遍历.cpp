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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> que;
        if(root!=nullptr)que.push(root);
        vector<vector<int>> res;
        while(!que.empty()){
            int size = que.size();
            vector<int> vec;
            while(size--){
                TreeNode* Node = que.front();que.pop();
                vec.push_back(Node->val);
                if(Node->left)que.push(Node->left);
                if(Node->right)que.push(Node->right);
            }
            res.push_back(vec);
        }
        return res;
    }
};

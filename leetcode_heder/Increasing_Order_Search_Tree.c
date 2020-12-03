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
    vector<int> a;
    void build(TreeNode* root)
    {
        if(root ==NULL)
            return ;
        else
        {
            a.push_back(root->val);
            build(root->left);
            build(root->right);
        }
    }
    TreeNode* increasingBST(TreeNode* root) 
    {
        build(root);
        sort(a.begin(),a.end());
        int n=a.size();
        TreeNode *t=root;
        for(int i=0;i<n-1;i++)
        {
            root->val=a[i];
            root->left=NULL;
           TreeNode *temp=new TreeNode;
            root->right=temp;
            root=root->right;
            
        }
        root->val=a[n-1];
        root->left=NULL;
        return t;
        
        
    }
};
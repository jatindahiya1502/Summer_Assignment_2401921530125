class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root){
            if(root->val > val){
                root=root->left;
            }
            else if(root->val < val){
                root = root->right;
            }
            else{
                return root;
            }
        }
        
        return root;
    }
};

You have been given a Binary Tree of 'N'
nodes, where the nodes have integer values.
Your task is to return the In-Order, Pre-Order, and Post-Order traversals of the given binary tree.
Answer:
void inorder(TreeNode *root, vector<int> &result) {
    if (!root) 
        return;
    inorder(root->left, result);
    result.push_back(root->data);
    inorder(root->right, result);
}

void preorder(TreeNode *root, vector<int> &result) {
    if (!root) 
        return;
    result.push_back(root->data);
    preorder(root->left, result);
    preorder(root->right, result);
}

void postorder(TreeNode *root, vector<int> &result) {
    if (!root) 
        return;
    postorder(root->left, result);
    postorder(root->right, result);
    result.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<int> inorderResult, preorderResult, postorderResult;

    inorder(root, inorderResult);
    preorder(root, preorderResult);
    postorder(root, postorderResult);

    return {inorderResult, preorderResult, postorderResult};
    
}

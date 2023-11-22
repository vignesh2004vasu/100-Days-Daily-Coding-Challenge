Given a Binary Tree. Check whether it is Symmetric or not, i.e. whether the binary tree is a Mirror image of itself or not.

Example 1:

Input:
         5
       /   \
      1     1
     /       \
    2         2
Output: 
True
Explanation: 
Tree is mirror image of itself i.e. tree is symmetric
Example 2:

Input:
         5
       /   \
      10     10
     /  \     \
    20  20     30
Output: 
False
Answer:
/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
     bool isMirror(Node* leftSubtree, Node* rightSubtree) {
        if (leftSubtree == NULL && rightSubtree == NULL)
            return true;
        if (leftSubtree == NULL || rightSubtree == NULL)
            return false;

        return (leftSubtree->data == rightSubtree->data) &&
               isMirror(leftSubtree->left, rightSubtree->right) &&
               isMirror(leftSubtree->right, rightSubtree->left);
    }

    bool isSymmetric(Node* root) {
      
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return true;

        return isMirror(root->left, root->right);
    }
};

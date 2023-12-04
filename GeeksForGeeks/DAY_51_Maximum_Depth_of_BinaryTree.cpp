Given a binary tree, find its maximum depth.
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Example 1:

Input:
 root  -->     1
             /   \
            3     2
           /
          4           
Output: 3
Explanation:
Maximum depth is between nodes 1 and 4, which is 3.
Example 2:

Input:
 root -->    10
           /    \
          20    30
           \      \  
           40     60
                  /
                 2 
Output: 4
Explanation:
Maximum depth is between nodes 10 and 2, which is 4
Answer:
class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        if (root == nullptr) {
            return 0;
        } else {
            int leftDepth = maxDepth(root->left);
            int rightDepth = maxDepth(root->right);

           
            return max(leftDepth, rightDepth) + 1;
        }
    }
};

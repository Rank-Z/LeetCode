/**
* Definition of TreeNode:
* class TreeNode {
* public:
*     int val;
*     TreeNode *left, *right;
*     TreeNode(int val) {
*         this->val = val;
*         this->left = this->right = NULL;
*     }
* }
*/
class Solution {
public:
	/**
	* @param root: The root of binary tree.
	* @return: An integer
	*/

	int func(TreeNode* node)
	{
		if (node == nullptr)
			return 0;

		int left = func(node->left) + 1;
		int right = func(node->right) + 1;

		return left>right ? left : right;


	}

	int maxDepth(TreeNode *root) {
		// write your code here
		return func(root);
	}
};
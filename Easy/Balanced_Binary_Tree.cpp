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
	/*
	* @param root: The root of binary tree.
	* @return: True if this Binary tree is Balanced, or false.
	*/
	int func(TreeNode* node)
	{
		if (node == nullptr)
			return 0;

		int left = func(node->left);
		int right = func(node->right);
		if (left == -1 || right == -1)
			return -1;

		if ((left - right) >= -1 && (left - right) <= 1)
			return left>right ? left + 1 : right + 1;

		return -1;

	}


	bool isBalanced(TreeNode * root) {
		// write your code here
		if ((func(root)) == -1)
			return false;

		return true;

	}
};
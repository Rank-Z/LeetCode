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
	* @param root: a TreeNode, the root of the binary tree
	* @return: nothing
	*/
	void func(TreeNode* node)
	{
		if (node->left)
			func(node->left);
		if (node->right)
			func(node->right);

		TreeNode* tmp = node->left;
		node->left = node->right;
		node->right = tmp;
	}

	void invertBinaryTree(TreeNode * root) {
		// write your code here
		func(root);
	}
};
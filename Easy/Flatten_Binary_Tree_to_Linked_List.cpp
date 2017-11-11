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
	* @return:
	*/
	TreeNode* find_last(TreeNode* node)
	{
		if (!node)return NULL;
		if ((!node->right) && (!node->left))return node;

		if (node->right)
			return find_last(node->right);

		if (node->left)
			return find_last(node->left);
	}

	void func(TreeNode* node)
	{
		if (!node)return;

		TreeNode* tmp;
		tmp = find_last(node->left);
		if (tmp)
			tmp->right = node->right;

		func(node->left);
		func(node->right);
		if (node->left)
			node->right = node->left;
		node->left = NULL;
	}


	void flatten(TreeNode * root) {
		// write your code here
		func(root);
	}
};
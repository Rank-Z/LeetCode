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
	* @param a: the root of binary tree a.
	* @param b: the root of binary tree b.
	* @return: true if they are identical, or false.
	*/
	bool func(TreeNode * a, TreeNode * b)
	{
		if ((a == 0) && (b == 0))return true;
		if ((a == 0) || (b == 0))return false;
		if (a->val != b->val)return false;
		return func(a->left, b->left) && func(a->right, b->right);

	}

	bool isIdentical(TreeNode * a, TreeNode * b) {
		// write your code here
		return func(a, b);
	}
};
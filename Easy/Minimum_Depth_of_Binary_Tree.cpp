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
	* @param root: The root of binary tree
	* @return: An integer
	*/

	int mindepth = 999999;

	void func(TreeNode* node , int dep)
	{
		if ((node->right == nullptr) && (node->left == nullptr))
			mindepth = mindepth<dep ? mindepth : dep;
		else
		{
			if (node->right != nullptr)
				func(node->right , dep + 1);
			if (node->left != nullptr)
				func(node->left , dep + 1);
		}

	}

	int minDepth(TreeNode * root) {
		// write your code here
		if (root == nullptr)
			return 0;
		func(root , 1);
		return mindepth;
	}
};
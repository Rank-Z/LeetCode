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
	* @param root: The root of the binary search tree.
	* @param node: insert this node into the binary search tree
	* @return: The root of the new binary search tree.
	*/
	TreeNode * insertNode(TreeNode * root , TreeNode * node) {
		// write your code here
		if (root == nullptr)
			return root = node;

		TreeNode* now = root;

		for (;;)
		{
			if (node->val<now->val)
			{
				if (now->left != nullptr)
					now = now->left;
				else
				{
					now->left = node;
					break;
				}
			}
			else
			{
				if (now->right != nullptr)
					now = now->right;
				else
				{
					now->right = node;
					break;
				}
			}
		}

		return root;


	}
};
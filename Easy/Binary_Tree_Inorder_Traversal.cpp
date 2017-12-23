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
	* @param root: A Tree
	* @return: Inorder in ArrayList which contains node values.
	*/

	void func(vector<int>& vi , TreeNode* node)
	{
		if (node == nullptr)
			return;

		func(vi , node->left);
		vi.push_back(node->val);
		func(vi , node->right);
	}

	vector<int> inorderTraversal(TreeNode * root) {
		// write your code here
		vector<int> ret;
		func(ret , root);
		return ret;
	}
};
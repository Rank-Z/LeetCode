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
	* @return: Postorder in ArrayList which contains node values.
	*/

	void func(vector<int>& vi , TreeNode* node)
	{
		if (node == nullptr)
			return;

		func(vi , node->left);
		func(vi , node->right);
		vi.push_back(node->val);
	}

	vector<int> postorderTraversal(TreeNode * root) {
		// write your code here
		vector<int> ret;
		func(ret , root);
		return ret;
	}
};
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
	* @return: Level order a list of lists of integer
	*/

	void func(vector<vector<int>>& vi , int lev , TreeNode* node)
	{
		if (node == nullptr)
			return;
		if (vi.size() <= lev)
			vi.resize(vi.size() + 1);
		vi [lev].push_back(node->val);
		func(vi , lev + 1 , node->left);
		func(vi , lev + 1 , node->right);
	}
	vector<vector<int>> levelOrder(TreeNode * root) {
		// write your code here
		vector<vector<int>> ret;
		func(ret , 0 , root);
		return ret;
	}
};
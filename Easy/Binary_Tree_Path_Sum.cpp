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
	* @param root: the root of binary tree
	* @param target: An integer
	* @return: all valid paths
	*/
	void func(vector<vector<int>>& res, vector<int> tempv, TreeNode * node, int target)
	{
		if (node)
		{
			tempv.push_back(node->val);
			int i = 0;
			for (auto t : tempv)
				i = t + i;
			if (i == target && !(node->left || node->right))

				res.push_back(tempv);


			func(res, tempv, node->left, target);
			func(res, tempv, node->right, target);
		}
	}

	vector<vector<int>> binaryTreePathSum(TreeNode * root, int target) {
		vector<vector<int>> res;
		vector<int> t;
		func(res, t, root, target);
		return res;

		// write your code here
	}
};
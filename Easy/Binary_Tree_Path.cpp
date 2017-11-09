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
	* @param root: the root of the binary tree
	* @return: all root-to-leaf paths
	*/
	void func(vector<string>& vs, TreeNode* node, string tmp, bool head = false)
	{
		if (node == 0)return;
		if (!head)
			tmp += "->";
		tmp += to_string(node->val);
		if ((node->left == 0) && (node->right == 0))
		{

			vs.push_back(tmp);
		}
		func(vs, node->right, tmp);
		func(vs, node->left, tmp);
	}

	vector<string> binaryTreePaths(TreeNode * root) {
		// write your code here
		vector<string> res;
		string s;
		func(res, root, s, true);
		return res;
	}
};
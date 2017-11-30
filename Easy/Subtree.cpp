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
	* @param T1: The roots of binary tree T1.
	* @param T2: The roots of binary tree T2.
	* @return: True if T2 is a subtree of T1, or false.
	*/
	void push(TreeNode* t, vector<int>& vi)
	{
		if (!t)
		{
			vi.push_back(-1);

			return;
		}
		vi.push_back(t->val);
		push(t->left, vi);
		push(t->right, vi);
	}

	bool isSubtree(TreeNode * T1, TreeNode * T2) {
		// write your code here
		if (!T2)
			return true;

		vector<int> v1;
		vector<int> v2;

		push(T1, v1);
		push(T2, v2);

		auto t = search(v1.begin(), v1.end(), v2.begin(), v2.end());

		return t != v1.end();

	}
};
};
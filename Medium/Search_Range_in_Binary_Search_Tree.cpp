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
	* @param root: param root: The root of the binary search tree
	* @param k1: An integer
	* @param k2: An integer
	* @return: return: Return all keys that k1<=key<=k2 in ascending order
	*/

	void func(TreeNode* root , vector<int>& ret , int k1 , int k2)
	{
		if (root->left)
			func(root->left , ret , k1 , k2);
		if (k1 <= root->val&&k2 >= root->val)
			ret.push_back(root->val);
		if (root->right)
			func(root->right , ret , k1 , k2);
	}

	vector<int> searchRange(TreeNode * root , int k1 , int k2) {
		// write your code here
		vector<int> ret;
		for (; root != nullptr;)
		{
			if (((k1 <= root->val) && (k2 >= root->val)))
				break;
			else if (k1 <= root->val)
				root = root->left;
			else
				root = root->right;
		}
		TreeNode* from;
		TreeNode* to;
		if (root == nullptr)
			return ret;
		from = to = root;
		for (; from->val>k1;)
			if (from->left == nullptr)
				break;
			else
				from = from->left;
		for (; to->val<k2;)
			if (to->right == nullptr)
				break;
			else
				to = to->right;



		func(root , ret , k1 , k2);
		return ret;


	}
};
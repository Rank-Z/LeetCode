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
	/**
	* This method will be invoked first, you should design your own algorithm
	* to serialize a binary tree which denote by a root node to a string which
	* can be easily deserialized by your own "deserialize" method later.
	*/
	string serialize(TreeNode * root) {
		// write your code here
		string ret;
		func1(ret, root);
		return ret;
	}


	void func1(string& str, TreeNode* node)
	{
		if (node==nullptr)
		{
			str.push_back('#');
			str.push_back(',');
			return;
		}
		string temp(to_string(node->val));
		str+=temp;
		str.push_back(',');
		func1(str, node->left);
		func1(str, node->right);
	}

	/**
	* This method will be invoked second, the argument data is what exactly
	* you serialized at method "serialize", that means the data is not given by
	* system, it's given by your own serialize method. So the format of data is
	* designed by yourself, and deserialize it here as you serialize it in
	* "serialize" method.
	*/
	TreeNode * deserialize(string &data) {
		// write your code here
		TreeNode* head;
		int i=0;
		func2(data, head, i);
		return head;
	}

	void  func2(string& ret, TreeNode*& node, int& index)
	{
		if (index>=ret.size())
			node=nullptr;
		if (ret [index]=='#')
		{
			index+=2;
			node=nullptr;
			return;
		}
		auto from=ret.begin();
		from+=index;
		auto end=from;
		for (; end!=ret.end(); ++end)
			if (*end==',')
				break;

		int data=stoi(string(from, end));
		node=new TreeNode;
		node->val=data;
		index+=(end-from)+1;
		func2(ret, node->left, index);
		func2(ret, node->right, index);



	}
};
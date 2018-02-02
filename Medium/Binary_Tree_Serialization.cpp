class Solution {
public:
	/**
	* This method will be invoked first, you should design your own algorithm
	* to serialize a binary tree which denote by a root node to a string which
	* can be easily deserialized by your own "deserialize" method later.
	*/



	string serialize(TreeNode * root) {
		long long l = reinterpret_cast<long long>(root);
		string s(to_string(l));
		return s;


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
		long long l = stoll(data);
		TreeNode* ret = reinterpret_cast<TreeNode*>(l);
		return ret;
	}
};
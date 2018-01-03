class Solution {
public:
	/*
	* @param str: A string
	* @return: a boolean
	*/
	bool isUnique(string &str) {
		// write your code here
		bool arr [128] = { 0 };
		for (auto&t : str)
			if (arr [t] == true)
				return false;
			else
				arr [t] = true;

		return true;
	}
};
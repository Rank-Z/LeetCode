class Solution {
public:
	/*
	* @param str: An array of char
	* @param offset: An integer
	* @return: nothing
	*/
	void rotateString(string &str, int offset) {
		// write your code here
		if (str.empty())
			return;

		for (; offset >= str.size();)
			offset -= str.size();
		string ret;
		for (; offset; --offset)
		{
			ret.insert(ret.begin(), str.back());
			str.pop_back();
		}
		ret += str;
		str = ret;
	}
};
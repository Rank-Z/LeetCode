class StringUtils {
public:
	/*
	* @param originalStr: the string we want to append to
	* @param size: the target length of the string
	* @param padChar: the character to pad to the left side of the string
	* @return: A string
	*/
	static string leftPad(string &originalStr, int size, char padChar = ' ') {
		// write your code here
		int dif = size - originalStr.size();
		if (dif <= 0)
			return originalStr;
		string res(dif, padChar);
		res = res + originalStr;
		return res;
	}
};
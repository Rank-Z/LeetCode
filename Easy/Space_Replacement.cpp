class Solution {
public:
	/*
	* @param string: An array of Char
	* @param length: The true length of the string
	* @return: The true length of new string
	*/
	int replaceBlank(char string[], int length) {
		// write your code here
		char* p = new char[length];
		memcpy(p, string, length);
		int count = 0;
		char* ret = string;
		for (int i = 0; i != length; ++i)
		{
			if (p[i] == 32)
			{
				count++;
				*(ret++) = '%';
				*(ret++) = '2';
				*(ret++) = '0';
			}
			else
			{
				*(ret++) = p[i];
			}
		}
		length += (2 * count);
		return length;
	}
};
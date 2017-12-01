class Solution {
public:
	/*
	* @param n: the integer to be reversed
	* @return: the reversed integer
	*/
	int reverseInteger(int n) {
		// write your code here
		bool flag = n>0 ? true : false;
		if (!flag)
			n = -n;
		int i = 0;
		for (; n;)
		{
			if (i >= 214748364)
				return 0;
			else
				i *= 10;
			i += n % 10;
			n /= 10;

		}
		if (!flag)
			i = -i;
		return i;
	}
};
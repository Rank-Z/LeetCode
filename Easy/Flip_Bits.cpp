class Solution {
public:
	/*
	* @param a: An integer
	* @param b: An integer
	* @return: An integer
	*/
	int bitSwapRequired(int a , int b) {
		// write your code here
		int ret = 0;
		for (int i = 0; i != 32; ++i)
		{
			if ((a^b) & 0x1)
				++ret;

			a >>= 1;
			b >>= 1;
		}

		return ret;
	}
};
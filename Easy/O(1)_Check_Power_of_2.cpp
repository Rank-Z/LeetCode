class Solution {
public:
	/*
	* @param n: An integer
	* @return: True or false
	*/
	bool checkPowerOf2(int n) {
		// write your code here
		if (n == 0)
			return false;
		for (;;)
		{
			if (n & 0x1)
				break;
			else
				n >>= 1;
		}
		n >>= 1;
		if (n)
			return false;
		else
			return true;
	}
};
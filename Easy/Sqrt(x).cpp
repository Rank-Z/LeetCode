class Solution {
public:
	/*
	* @param x: An integer
	* @return: The sqrt of x
	*/
	int sqrt(int x) {
		// write your code here
		if (x == 1)
			return 1;

		int l = 0;
		int h = x;
		long long ret;
		for (;;)
		{
			ret = (l + h) / 2;
			if (ret*ret>x)
			{
				h = ret;
			}
			else
			{
				if ((ret + 1)*(ret + 1)>x)
					break;

				l = ret;
			}
		}
		return ret;
	}
};
class Solution {
public:
	/**
	* @param n: An integer
	* @return: An integer
	*/
	int climbStairs(int n) {
		// write your code here
		if (n<1)
			return 0;
		if (n == 1)
			return 1;
		if (n == 2)
			return 2;

		int a = 1;
		int b = 2;
		int now = 0;
		for (int i = 3; i <= n; ++i)
		{
			now = a + b;
			a = b;
			b = now;
		}

		return now;
	}
};

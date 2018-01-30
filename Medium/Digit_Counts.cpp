class Solution {
public:
	/*
	* @param : An integer
	* @param : An integer
	* @return: An integer denote the count of digit k in 1..n
	*/
	int digitCounts(int k, int n) {
		// write your code here
		int ret = 0;
		for (int i = 0; i != n; ++i)
			for (int j = i;; j /= 10)
			{
				if (j == 0)
				{
					if (k == 0)
						++ret;
					break;
				}
				else if ((j % 10 == k))
					++ret;
			}
		return ret;
	}
};
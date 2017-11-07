class Solution {
public:
	/*
	* @param num: An integer
	* @return: true if num is an ugly number or false
	*/

	bool isUgly(int num) {
		// write your code here
		if (num <= 0)
			return false;
		if (num<12)
			return true;

		for (int i = 12; i <= (num / 2); ++i)
		{
			bool flag = true;
			for (int j = 2; j <= (i / 2); ++j)
			{
				if (i%j)
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				if (num%i == 0)
					return false;
			}
		}
		if (num % 13 == 0)
			return false;
		if (num % 11 == 0)
			return false;
		if (num % 7 == 0)
			return false;
		if (num % 2 == 0)
			return true;
		if (num % 3 == 0)
			return true;
		if (num % 5 == 0)
			return true;
		return false;

	}
};
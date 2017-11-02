class Solution {
public:
	/*
	* @param num: a non-negative integer
	* @return: one digit
	*/
	int addDigits(int num) {
		// write your code here
		for (; num>9; )
		{
			int temp = 0;
			for (; num>9; )
			{
				int i = num % 10;
				num /= 10;
				temp += i;
			}
			num += temp;
		}
		return num;
	}
};
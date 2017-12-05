class Solution {
public:
	/*
	* @param : An integer
	* @param : An integer
	* @return: The sum of a and b
	*/
	int aplusb(int a, int b) {
		// write your code here
		while (b)
		{
			int carry = a&b;
			a ^= b;
			b = carry << 1;
		}
		return a;
	}
};
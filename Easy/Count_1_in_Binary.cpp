class Solution {
public:
	/*
	* @param num: An integer
	* @return: An integer
	*/
	int countOnes(int num) {
		// write your code here
		int count = 0;
		unsigned u = static_cast<unsigned>(num);
		for (; u;)
		{
			if (u & 1)
				++count;

			u >>= 1;
		}
		return count;
	}
};
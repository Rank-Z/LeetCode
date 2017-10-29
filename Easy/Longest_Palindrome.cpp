class Solution {
public:
	/*
	* @param s: a string which consists of lowercase or uppercase letters
	* @return: the length of the longest palindromes that can be built
	*/
	int longestPalindrome(string s) {
		// write your code here
		int res = 0;
		array<int, 130> ai = { 0 };
		for (auto&t : s)
		{
			ai[static_cast<int>(t)]++;
		}
		for (auto&t : ai)
		{
			for (; t > 1;)
			{
				res += 2;
				t -= 2;
			}
		}
		for (auto&t : ai)
			if (t > 0)
			{
				++res;
				break;
			}
		return res;
	}
};
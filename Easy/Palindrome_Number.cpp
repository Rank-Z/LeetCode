#include<algorithm>
class Solution {
public:
	/*
	* @param num: a positive number
	* @return: true if it's a palindrome or false
	*/
	bool isPalindrome(int num) {
		// write your code here
		if (num < 10)
			return true;
		string s = to_string(num);
		reverse(s.begin(), s.end());
		string s2 = to_string(num);
		if (s == s2)
			return true;
		return false;
	}
};
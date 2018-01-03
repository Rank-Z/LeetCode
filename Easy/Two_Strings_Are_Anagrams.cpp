class Solution {
public:
	/**
	* @param s: The first string
	* @param b: The second string
	* @return true or false
	*/
	bool anagram(string s , string t) {
		// write your code here
		int arr [128] = { 0 };
		for (auto&a : s)
			++arr [a];
		for (auto&a : t)
			--arr [a];

		for (auto&a : arr)
			if (a != 0)
				return false;

		return true;
	}
};
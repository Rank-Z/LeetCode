class Solution {
public:
	/*
	* @param s: A string
	* @return: the length of last word
	*/
	int lengthOfLastWord(string &s) {
		// write your code here
		if (s.empty())
			return 0;
		auto end = s.end();
		--end;
		for (; *end == ' '&&end != s.begin(); --end);

		auto from = end;
		for (; *from != ' '&&from != s.begin(); --from);
		if (from == s.begin() && *s.begin() != ' ')
			++end;
		return end - from;

	}
};
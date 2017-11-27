class Solution {
public:
	/*
	* @param s: A string
	* @return: Whether the string is a valid palindrome
	*/
	bool isPalindrome(string &s) {
		// write your code here
		if (s.empty())
			return true;
		for (auto it = s.begin(); it != s.end();)
		{
			if ((*it >= 'a'&&*it <= 'z') || (*it >= 'A'&&*it <= 'Z') || (*it >= '0'&&*it <= '9'))
			{
				*it = tolower(*it);
				++it;
			}
			else
			{
				s.erase(it);
				it = s.begin();
			}
		}
		if (s.empty())
			return true;

		auto head = s.begin();
		auto end = --s.end();
		for (; end - head>0;)
		{
			if (*head != *end)
				return false;

			++head;
			--end;
		}
		return true;
	}
};
class Solution {
public:
	/*
	* @param s: A string
	* @return: whether the string is a valid parentheses
	*/
	bool isValidParentheses(string &s) {
		// write your code here
		stack<char, vector<char>> sta;
		auto it = s.begin();
		while (it != s.end())
		{
			if (*it == '(' || *it == '{' || *it == '[')
			{
				sta.push(*it);
			}
			else if (sta.empty())
			{
				return false;
			}
			else if (*it == ')')
			{
				if (sta.top() == '(')
				{
					sta.pop();
				}
				else return false;
			}
			else if (*it == '}')
			{
				if (sta.top() == '{')
				{
					sta.pop();
				}
				else return false;
			}
			else if (*it == ']')
			{
				if (sta.top() == '[')
				{
					sta.pop();
				}
				else return false;
			}
			else
				return false;
			++it;
		}
		if (sta.empty())
			return true;
		else
			return false;
	}
};
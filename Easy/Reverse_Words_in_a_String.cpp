class Solution {
public:
	/*
	* @param s: A string
	* @return: A string
	*/
	string reverseWords(string &s) {
		// write your code here
		vector<string> vs;
		for (auto it = s.begin(); it != s.end();)
		{
			if (*it == ' ')
			{
				++it;
				continue;
			}

			string str;
			for (;;)
			{
				str.push_back(*it);
				++it;
				if (it == s.end())
					break;
				if ((*it) == ' ')
					break;
			}
			vs.push_back(str);
		}
		string ret;
		for (auto rit = vs.rbegin(); rit != vs.rend(); ++rit)
		{
			ret += (*rit);
			ret += ' ';
		}
		return ret;
	}
};
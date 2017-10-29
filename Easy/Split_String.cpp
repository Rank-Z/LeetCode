class Solution {
public:
	/*
	* @param : a string to be split
	* @return: all possible split string array
	*/
	void func(string& s, vector<vector<string>>&res, vector<string>temp, string::iterator it)
	{
		if (s.end() - it == 1)
		{
			string st{ *(it) };
			temp.push_back(st);
			res.push_back(temp);
		}
		else if (it == s.end())
		{
			res.push_back(temp);
		}
		else
		{
			{
				vector<string> vs = temp;
				string st{ *(it) };
				vs.push_back(st);
				func(s, res, vs, it + 1);
			}
			{
				vector<string> vs2 = temp;
				string st1{ *(it) ,*(it + 1) };
				vs2.push_back(st1);
				func(s, res, vs2, it + 2);
			}
		}

	}

	vector<vector<string>> splitString(string& s) {
		// write your code here
		vector<vector<string>> res;
		vector<string> vt;
		func(s, res, vt, s.begin());
		return res;

	}
};
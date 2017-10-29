class Solution {
public:
	/*
	* @param : the 1st string
	* @param : the 2nd string
	* @return: uncommon characters of given strings
	*/
	string concatenetedString(string &s1, string &s2) {
		// write your code here
		auto it1 = s1.begin();
		auto it2 = s2.begin();

		auto s1copy = s1;
		auto s2copy = s2;
		string r1;
		string r2;
		string res1;
		string res2;

		for (auto&t : s2)
		{
			bool flag = true;
			for (auto&t2 : s1copy)
				if (t2 == t)
					flag = false;
			if (flag)
				res2 += t;
		}
		for (auto&t : s1)
		{
			bool flag = true;
			for (auto&t2 : s2copy)
				if (t2 == t)
					flag = false;
			if (flag)
				res1 += t;
		}
		return res1 + res2;
	}
};
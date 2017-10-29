class Solution {
public:
	/*
	* @param : a given string
	* @param : another given string
	* @return: An array of missing string
	*/
	vector<string> func(string str1)
	{
		vector<string> vs;
		string temp;
		for (auto it = str1.begin(); it != str1.end(); ++it)
		{
			if (*(it) == ' ' && !temp.empty())
			{
				vs.push_back(temp);
				temp.clear();
			}
			if (*(it) != ' ')
				temp += *(it);
		}
		vs.push_back(temp);
		return vs;
	}

	vector<string> missingString(string str1, string str2) {
		// Write your code here
		vector<string> vs1 = func(str1);
		vector<string> vs2 = func(str2);

		vector<string> res;
		for (auto&t1 : vs1)
		{

			bool flag = true;
			for (auto&t2 : vs2)
				if (t1 == t2)
					flag = false;
			if (flag)
				res.push_back(t1);
		}
		return res;
	}
};
class Solution {
public:
	/*
	* @param a: a number
	* @param b: a number
	* @return: the result
	*/
	string addBinary(string &a , string &b) {
		// write your code here
		string ret;
		bool ac = false;
		auto it_a = a.rbegin();
		auto it_b = b.rbegin();
		for (; it_a != a.rend() && it_b != b.rend(); ++it_a , ++it_b)
		{
			int flag = (ac == true ? 1 : 0) + (*(it_a) == '1' ? 1 : 0) + (*(it_b) == '1' ? 1 : 0);
			ac = false;

			if (flag == 0)
				ret.push_back('0');
			else if (flag == 1)
				ret.push_back('1');
			else if (flag == 2)
			{
				ret.push_back('0');
				ac = true;
			}
			else
			{
				ret.push_back('1');
				ac = true;
			}
		}



		for (; it_a != a.rend(); ++it_a)
		{
			int flag = (ac == true ? 1 : 0) + (*it_a == '1' ? 1 : 0);
			ac = false;

			if (flag == 0)
				ret.push_back('0');
			else if (flag == 1)
				ret.push_back('1');
			else
			{
				ret.push_back('0');
				ac = true;
			}
		}

		for (; it_b != b.rend(); ++it_b)
		{
			int flag = (ac == true ? 1 : 0) + (*it_b == '1' ? 1 : 0);
			ac = false;

			if (flag == 0)
				ret.push_back('0');
			else if (flag == 1)
				ret.push_back('1');
			else
			{
				ret.push_back('0');
				ac = true;
			}
		}
		if (ac)
			ret.push_back('1');

		reverse(ret.begin() , ret.end());
		return ret;
	}
};
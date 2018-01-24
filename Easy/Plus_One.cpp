class Solution {
public:
	/*
	* @param digits: a number represented as an array of digits
	* @return: the result
	*/
	vector<int> plusOne(vector<int> &digits) {
		// write your code here

		vector<int> ret;
		bool ac = true;
		for (auto it = digits.rbegin(); it != digits.rend(); ++it)
		{
			if (*it == 9 && ac)
			{
				ret.push_back(0);
			}
			else
			{
				if (ac)
					ret.push_back(*it + 1);
				else
					ret.push_back(*it);

				ac = false;
			}
		}
		if (ac)
			ret.push_back(1);

		reverse(ret.begin() , ret.end());
		return ret;
	}
};
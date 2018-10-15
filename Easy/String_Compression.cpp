class Solution {
public:
	/**
	* @param originalString: a string
	* @return: a compressed string
	*/
	string compress(string &originalString) {
		// write your code here

		string ret;
		char last;
		if (originalString.empty())
		{
			return ret;
		}
		else
		{
			last = originalString.front();
			ret.push_back(last);
		}
		int count = 1;

		auto it = originalString.begin();
		++it;

		for (; it != originalString.end(); ++it)
		{
			if (last == (*it))
			{
				++count;
			}
			else
			{
				if (count < 9)
				{
					ret.push_back('0' + count);
				}
				else
				{
					string temp;
					for (; count; count /= 10)
					{
						int last_num = count % 10;
						temp.push_back('0' + last_num);
					}
					for (auto rit = temp.rbegin(); rit != temp.rend(); ++rit)
					{
						ret.push_back(*rit);
					}
				}
				count = 1;
				last = (*it);
				ret.push_back(last);
			}
		}
		if (count < 9)
		{
			ret.push_back('0' + count);
		}
		else
		{
			string temp;
			for (; count; count /= 10)
			{
				int last_num = count % 10;
				temp.push_back('0' + last_num);
			}
			for (auto rit = temp.rbegin(); rit != temp.rend(); ++rit)
			{
				ret.push_back(*rit);
			}
		}

		if (ret.size() < originalString.size())
		{
			return ret;
		}
		else
		{
			return originalString;
		}

	}
};
class Solution {
public:
	/*
	* @param s: a string
	* @return: it's index
	*/
	int firstUniqChar(string &s) {
		// write your code here
		int reg[128] = { 0 };
		for (auto it = s.begin(); it != s.end(); ++it)
			if (reg[*it] == 0)
				reg[*it] = it - s.begin() + 1;
			else if (reg[*it] > 0)
				reg[*it] = -1;

		int index = 0;
		for (auto&t : reg)
			if (t>0)
			{
				if (index == 0)
					index = t;
				else if (index>t)
					index = t;
			}

		if (index == 0)
			index = -1;
		else
			--index;

		return index;
	}
};
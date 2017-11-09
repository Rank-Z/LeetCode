class Solution {
public:
	/*
	* @param n: An integer
	* @return: true if this is a happy number or false
	*/
	bool isHappy(int n) {
		// write your code here
		vector<int> vi;
		vi.push_back(n);
		for (; ;)
		{
			int tmp = 0;
			for (; n != 0; n = n / 10)
			{
				tmp += (n % 10)*(n % 10);
			}
			if (tmp == 1)
				return true;
			if (find(vi.begin(), vi.end(), tmp) != vi.end())
				return false;
			vi.push_back(tmp);
			n = tmp;
		}
	}
};
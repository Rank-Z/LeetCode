class Solution {
public:
	/**
	* @param n: n pairs
	* @return: All combinations of well-formed parentheses
	*/

	void generate(int left, int right, int n, string last, vector<string>& ret)
	{
		if (left == n)
		{
			for (int i = n - right; i != 0; --i)
			{
				last.push_back(')');
			}
			ret.push_back(last);
			return;
		}

		last.push_back('(');
		left++;
		generate(left, right, n, last, ret);
		left--;
		if (right < left)
		{
			last.back() = ')';
			right++;
			generate(left, right, n, last, ret);
		}
	}

	vector<string> generateParenthesis(int n) {
		// write your code here

		vector<string> ret;
		generate(0, 0, n, "", ret);
		return ret;

	}
};
class Solution {
public:
	/*
	* @param A: An array of Integer
	* @return: an integer
	*/
	int longestIncreasingContinuousSubsequence(vector<int> &A) {
		// write your code here
		if (A.empty())
			return 0;

		int max = 0;
		int count = 1;
		int old = *A.begin();
		for (auto it = A.begin(); it != A.end(); ++it)
		{
			if (*it>old)
			{
				++count;
			}
			else
			{
				max = max>count ? max : count;
				count = 1;
			}
			old = *it;
		}
		max = max>count ? max : count;
		old = *A.begin();
		count = 1;

		for (auto it = A.begin(); it != A.end(); ++it)
		{
			if (*it<old)
			{
				++count;
			}
			else
			{
				max = max>count ? max : count;
				count = 1;
			}
			old = *it;
		}
		max = max>count ? max : count;

	}
};
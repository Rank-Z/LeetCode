class Solution {
public:
	/*
	* @param nums: A list of integers
	* @return: A list of integers includes the index of the first number and the index of the last number
	*/
	vector<int> subarraySum(vector<int> &nums) {
		// write your code here

		int size = nums.size();
		for (int i = 0; i != size; ++i)
		{
			int sum = nums [i];
			if (sum == 0)
				return { i,i };
			for (int j = i + 1; j != size; ++j)
			{
				sum += nums [j];
				if (sum == 0)
					return { i,j };
			}
		}
	}
};
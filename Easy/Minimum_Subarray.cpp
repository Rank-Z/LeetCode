class Solution {
public:
	/*
	* @param nums: a list of integers
	* @return: A integer indicate the sum of minimum subarray
	*/
	int minSubArray(vector<int> &nums) {
		// write your code here
		int min = 0;
		int sum = 0;
		for (auto&t : nums)
		{
			if (!(min == 0 && t>0))
			{
				sum += t;
				if (sum>0)
					sum = 0;
				else
					min = min<sum ? min : sum;
			}

		}
		if (min == 0)
			min = *std::min_element(nums.begin(), nums.end());

		return min;
	}
};
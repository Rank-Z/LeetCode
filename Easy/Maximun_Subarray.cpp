class Solution {
public:
	/*
	* @param nums: A list of integers
	* @return: A integer indicate the sum of max subarray
	*/
	int maxSubArray(vector<int> &nums) {
		// write your code here
		int sum = 0;
		int max = 0;
		auto it = nums.begin();
		for (; it != nums.end(); ++it)
		{
			if (sum == 0 && *it<0)
			{

			}
			else
			{
				sum += *it;
				if (sum<0)
					sum = 0;
				else
					max = max>sum ? max : sum;
			}
		}
		if (max == 0)
			max = *std::max_element(nums.begin(), nums.end());
		return max;
	}
};
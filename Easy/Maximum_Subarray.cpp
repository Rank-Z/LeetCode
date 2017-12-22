class Solution {
public:
	/*
	* @param nums: A list of integers
	* @return: A integer indicate the sum of max subarray
	*/
	int maxSubArray(vector<int> &nums) {
		// write your code here
		int start = *(nums.begin());
		int all = start;

		for (auto it = (++nums.begin()); it != nums.end(); ++it)
		{
			start = max(start + *it , *it);
			all = max(all , start);
		}

		return all;
	}
};
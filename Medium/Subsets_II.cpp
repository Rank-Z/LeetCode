class Solution {
public:
	/*
	* @param nums: A set of numbers.
	* @return: A list of lists. All valid subsets.
	*/

	void func(vector<vector<int>>& ret, vector<int>&nums, vector<int> temp, int index)
	{
		if (index==nums.size())
		{
			ret.push_back(temp);
			return;
		}
		if (index==(nums.size()-1))
		{
			ret.push_back(temp);
			temp.push_back(nums [index]);
			ret.push_back(temp);
			return;
		}

		if (nums [index]!=nums [index+1])
		{
			func(ret, nums, temp, index+1);
			temp.push_back(nums [index]);
			func(ret, nums, temp, index+1);
		}
		else
		{
			int end=index+1;
			for (; (end<nums.size())&&(nums [end-1]==nums [end]); ++end)
				;
			int n=end-index;
			func(ret, nums, temp, end);
			for (; n; --n)
			{
				temp.push_back(nums [index]);
				func(ret, nums, temp, end);
			}
		}
	}


	vector<vector<int>> subsetsWithDup(vector<int> &nums) {
		// write your code here

		std::sort(nums.begin(), nums.end());
		vector<vector<int>> ret;
		vector<int> temp;
		func(ret, nums, temp, 0);
		return ret;
	}
};
class Solution {
public:
	/*
	* @param nums: A list of integers
	* @return: An integer denotes the sum of max two non-overlapping subarrays
	*/

	template<typename Iter>
	vector<int> find_maxsubarr(Iter from, Iter end)
	{
		int max = -9999999;
		int count = 0;
		vector<int> ret;

		for (; from != end; ++from)
		{
			if (count < 0)
			{
				count = 0;
			}
			count += (*from);
			if (count > max)
			{
				max = count;
			}
			ret.push_back(max);
		}

		return ret;
	}



	int maxTwoSubArrays(vector<int> &nums) {
		// write your code here

		auto maxarr1 = find_maxsubarr(nums.begin(), nums.end());
		auto maxarr2 = find_maxsubarr(nums.rbegin(), nums.rend());

		int max = -9999999;

		auto it1 = maxarr1.begin();
		auto it2 = maxarr2.rbegin();
		++it2;

		for (; it1 != (maxarr1.end() - 1); ++it1, ++it2)
		{
			int sum = (*it1) + (*it2);
			if (sum > max)
			{
				max = sum;
			}
		}

		return max;
	}
};
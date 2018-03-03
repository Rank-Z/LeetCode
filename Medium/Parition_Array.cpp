class Solution {
public:
	/**
	* @param nums: The integer array you should partition
	* @param k: An integer
	* @return: The index after partition
	*/
	int partitionArray(vector<int> &nums, int k) {
		// write your code here
		if (nums.empty())
			return 0;
		auto first=nums.begin();
		auto last=nums.end();
		for (; first!=last;)
			if (k>(*first))
				++first;
			else
				break;
		if (first!=last)
		{
			for (auto it=first+1; it!=nums.end(); ++it)
			{

				if (k>(*it))
				{
					std::iter_swap(first, it);
					++first;
				}
			}
		}
		return first-nums.begin();
	}
};
class Solution {
public:
	/**
	* @param nums: An integer array
	* @return: The second max number in the array.
	*/
	int secondMax(vector<int> &nums) {
		// write your code here
		int first = nums.front() > (*(nums.begin() + 1)) ? nums.front() : (*(nums.begin() + 1));
		int second = nums.front() > (*(nums.begin() + 1)) ? (*(nums.begin() + 1)) : nums.front();

		for (auto it = nums.begin() + 2; it != nums.end(); ++it)
		{
			if ((*it) > second)
			{
				if ((*it) <= first)
				{
					second = (*it);
				}
				else
				{
					second = first;
					first = (*it);
				}
			}
		}

		return second;
	}
};
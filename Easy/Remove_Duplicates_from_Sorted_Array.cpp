class Solution {
public:
	/*
	* @param nums: An ineger array
	* @return: An integer
	*/
	int removeDuplicates(vector<int> &nums) {
		// write your code here
		if (nums.empty())
			return 0;
		auto it1 = nums.begin();
		auto it2 = it1 + 1;
		for (; it2 != nums.end();)
		{
			if (*it1 == *it2)
			{
				nums.erase(it2);
				it2 = it1 + 1;
			}
			else
			{
				++it1;
				++it2;
			}
		}
		return nums.size();
	}
};
class Solution {
public:
	/**
	* @param A: a list of integers
	* @return : return an integer
	*/
	int removeDuplicates(vector<int> &nums) {
		// write your code here
		auto it1 = nums.begin();
		auto it2 = it1;
		for (; it2 != nums.end();)
		{
			if (it1 == it2)
				++it2;
			if (*it1 != *it2)
				++it1;
			else
			{
				if (it2 - it1>1)
				{
					nums.erase(it2);
					it2 = it1 + 1;
				}
				else
				{
					if (it2 != nums.end())
						++it2;
				}
			}
		}
		return nums.size();
	}
};
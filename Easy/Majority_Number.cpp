class Solution {
public:
	/*
	* @param nums: a list of integers
	* @return: find a  majority number
	*/
	int majorityNumber(vector<int> &nums) {
		// write your code here
		int mid = nums.size() / 2;
		map<int , int> mi;
		for (auto&t : nums)
		{
			if (mi.count(t) == 0)
				mi.emplace(t , 1);
			else
			{
				++mi [t];
				if (mi [t]>mid)
					return t;
			}
		}
		return *nums.begin();
	}
};
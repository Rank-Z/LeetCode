class Solution {
public:
	/*
	* @param nums: An integer array
	* @return: nothing
	*/
	void recoverRotatedSortedArray(vector<int> &nums) {
		// write your code here
		if (nums.empty())
			return;

		auto it = std::min_element(nums.begin(), nums.end());
		vector<int> ret;
		for (auto it1 = it; it1 != nums.end(); ++it1)
			ret.push_back(*it1);
		for (auto it2 = nums.begin(); it2 != it; ++it2)
			ret.push_back(*it2);

		nums = std::move(ret);
		return;
	}
};
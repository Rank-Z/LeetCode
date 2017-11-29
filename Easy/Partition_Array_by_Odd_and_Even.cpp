class Solution {
public:
	/*
	* @param nums: an array of integers
	* @return: nothing
	*/
	void partitionArray(vector<int> &nums) {
		// write your code here
		vector<int> tmp1;
		vector<int> tmp2;
		for (auto&t : nums)
		{
			if (t % 2)
				tmp2.push_back(t);
			else
				tmp1.push_back(t);
		}
		nums.clear();
		nums = move(tmp2);
		nums.insert(nums.end(), tmp1.begin(), tmp1.end());
	}
};
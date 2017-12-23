class Solution {
public:
	/*
	* @param : A list of integers
	* @return: An integer denotes the middle number of the array
	*/
	int median(vector<int> &nums) {
		// write your code here
		sort(nums.begin() , nums.end());
		if (nums.size() % 2)
			return nums [nums.size() / 2];
		else
			return nums [nums.size() / 2 - 1];
	}
};
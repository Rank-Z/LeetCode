class Solution {
public:
	/*
	* @param nums: an integer array
	* @return:
	*/
	void moveZeroes(vector<int>& nums) {
		// write your code here
		int i = nums.size();
		for (int j = 0; i != 0; --i)
			if (*(nums.begin() + j) == 0)
			{
				nums.erase(nums.begin() + j);
				nums.push_back(0);
			}
			else
				++j;
	}
};
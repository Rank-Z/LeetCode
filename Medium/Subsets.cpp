class Solution {
public:
	/*
	* @param nums: A set of numbers
	* @return: A list of lists
	*/

	void func(vector<vector<int>>& ret ,
		vector<int>& nums , vector<int> temp , int index)
	{
		if (index<nums.size())
		{
			if (index>0 && (nums [index - 1] == nums [index]))
				func(ret , nums , temp , index + 1);
			else
			{
				func(ret , nums , temp , index + 1);
				temp.push_back(nums [index]);
				func(ret , nums , temp , index + 1);
			}
		}
		else if (!temp.empty())
			ret.push_back(temp);
	}


	vector<vector<int>> subsets(vector<int> &nums) {
		// write your code here
		sort(nums.begin() , nums.end());
		vector<int> empty;
		vector<vector<int>> ret;
		func(ret , nums , empty , 0);
		ret.push_back(empty);
		return ret;

	}
};
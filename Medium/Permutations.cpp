class Solution {
public:
	/*
	* @param nums: A list of integers.
	* @return: A list of permutations.
	*/

	void func(vector<vector<int>>& ret , vector<int> temp , vector<int> input)
	{
		if (input.empty())
		{
			if ((!temp.empty()))
				ret.push_back(temp);
			return;
		}
		for (auto it = input.begin(); it != input.end(); ++it)
		{
			vector<int> copy(input);
			auto it2 = copy.begin() + (it - input.begin());
			vector<int> temp_copy(temp);
			temp_copy.push_back(*it);
			copy.erase(it2);
			func(ret , temp_copy , copy);
		}
	}

	vector<vector<int>> permute(vector<int> &nums) {
		// write your code here
		vector<vector<int>> ret;
		vector<int> empty;
		func(ret , empty , nums);
		if (ret.empty())
			ret.push_back(empty);
		return ret;

	}
};
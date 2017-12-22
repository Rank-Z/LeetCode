class Solution {
public:
	/*
	* @param numbers: An array of Integer
	* @param target: target = numbers[index1] + numbers[index2]
	* @return: [index1 + 1, index2 + 1] (index1 < index2)
	*/
	vector<int> twoSum(vector<int> &numbers , int target) {
		// write your code here
		for (auto it1 = numbers.begin(); it1 != numbers.end(); ++it1)
			for (auto it2 = (it1 + 1); it2 != numbers.end(); ++it2)
				if (((*it1) + (*it2)) == target)
				{
					vector<int> ret;
					ret.push_back(it1 - numbers.begin());
					ret.push_back(it2 - numbers.begin());
					return ret;
				}
	}
};
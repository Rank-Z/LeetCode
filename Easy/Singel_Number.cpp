class Solution {
public:
	/*
	* @param A: An integer array
	* @return: An integer
	*/
	int singleNumber(vector<int> &A) {
		// write your code here
		unordered_set<int> set;
		for (auto&t : A)
		{
			if (set.find(t) != set.end())
				set.erase(t);
			else
				set.insert(t);
		}
		return *set.begin();
	}
};
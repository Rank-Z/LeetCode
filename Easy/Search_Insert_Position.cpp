class Solution {
public:
	/*
	* @param A: an integer sorted array
	* @param target: an integer to be inserted
	* @return: An integer
	*/
	int searchInsert(vector<int> &A , int target) {
		// write your code here
		if (A.empty())
			return 0;

		auto it = find_if(A.begin() , A.end() , [target] (int i) {return i>target; });
		if (it == A.begin())
			return 0;
		if (*(--it) == target)
			return it - A.begin();
		else
			return it - A.begin() + 1;
	}
};
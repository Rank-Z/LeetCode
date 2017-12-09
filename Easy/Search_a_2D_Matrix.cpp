class Solution {
public:
	/*
	* @param matrix: matrix, a list of lists of integers
	* @param target: An integer
	* @return: a boolean, indicate whether matrix contains target
	*/
	bool searchMatrix(vector<vector<int>> &matrix, int target) {
		// write your code here
		for (auto&t1 : matrix)
			for (auto&t2 : t1)
				if (t2 == target)
					return true;

		return false;
	}
};
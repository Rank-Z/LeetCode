class Solution {
public:
	/*
	* @param grid: a list of lists of integers
	* @return: An integer, minimizes the sum of all numbers along its path
	*/
	int minPathSum(vector<vector<int>> &grid) {
		// write your code here
		if (grid.empty())
			return 0;

		int m = grid.size();
		int n = grid [0].size();

		int sum = 0;
		for (int i = 0; i != m; ++i)
		{
			grid [i] [0] += sum;
			sum = grid [i] [0];
		}

		sum = 0;
		for (int i = 0; i != n; ++i)
		{
			grid [0] [i] += sum;
			sum = grid [0] [i];
		}


		for (int i = 1; i<m; ++i)
			for (int j = 1; j<n; ++j)
				grid [i] [j] += (grid [i - 1] [j]<grid [i] [j - 1] ? grid [i - 1] [j] : grid [i] [j - 1]);


		return grid [m - 1] [n - 1];
	}
};
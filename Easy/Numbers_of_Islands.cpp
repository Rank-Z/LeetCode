class Solution {
public:
	/*
	* @param grid: a boolean 2D matrix
	* @return: an integer
	*/

	void func(vector<vector<bool>>& g , int i , int j)
	{
		if (g [i] [j] == 0)
			return;
		g [i] [j] = 0;
		if (i<(g.size() - 1))
			func(g , i + 1 , j);
		if (i != 0)
			func(g , i - 1 , j);
		if (j<(g [0].size() - 1))
			func(g , i , j + 1);
		if (j != 0)
			func(g , i , j - 1);
	}



	int numIslands(vector<vector<bool>> &grid) {
		// write your code here
		if (grid.empty())
			return 0;
		int m = grid.size();
		int n = grid [0].size();
		int i = 0;
		int count = 0;
		for (; i<m; ++i)
			for (int j = 0; j<n; ++j)
				if (grid [i] [j] == 1)
				{
					func(grid , i , j);
					++count;
				}

		return count;
	}
};
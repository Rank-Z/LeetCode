class Solution {
public:
	/*
	* @param obstacleGrid: A list of lists of integers
	* @return: An integer
	*/
	int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
		// write your code here
		if (obstacleGrid.empty())
			return 0;

		int m = obstacleGrid.size();
		int n = obstacleGrid [0].size();

		if (obstacleGrid [0] [0])
			return 0;

		int *arr1 = new int [n];
		int *arr2 = new int [n];

		for (int i = 0; i != n; ++i)
			arr1 [i] = arr2 [i] = 0;

		for (int i = 0; i != n; ++i)
			if (obstacleGrid [0] [i] != 1)
				arr2 [i] = arr1 [i] = 1;
			else
				break;


		for (int i = 1; i != m; ++i)
		{

			for (int j = 0; j != n; ++j)
			{
				if (j == 0)
				{
					if (obstacleGrid [i] [0] == 1)
						arr2 [0] = 0;
					else if (arr1 [0] == 0)
						arr2 [0] = 0;
					else
						arr2 [0] = 1;

					arr1 [0] = arr2 [0];
				}
				else
				{
					if (obstacleGrid [i] [j] != 1)
						arr2 [j] = arr1 [j] + arr2 [j - 1];
					else
						arr2 [j] = 0;
					arr1 [j] = arr2 [j];
				}
			}
		}

		return arr2 [n - 1];
	}
};
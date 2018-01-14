class Solution {
public:
	/*
	* @param m: positive integer (1 <= m <= 100)
	* @param n: positive integer (1 <= n <= 100)
	* @return: An integer
	*/
	int uniquePaths(int m , int n) {
		// write your code here

		if (n == 1 || m == 1)
			return 1;

		int *arr1 = new int [m];
		int *arr2 = new int [m];
		for (int i = 0; i != m; ++i)
		{
			arr1 [i] = 1;
			arr2 [i] = 1;
		}


		for (int i = 2; i <= n; ++i)
		{

			for (int j = 1; j != m; ++j)
			{
				arr1 [j] = arr2 [j];
				arr2 [j] = arr1 [j] + arr2 [j - 1];
			}
		}

		return arr2 [m - 1];
	}
};
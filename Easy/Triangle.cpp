class Solution {
public:
	/*
	* @param triangle: a list of lists of integers
	* @return: An integer, minimum path sum
	*/
	int minimumTotal(vector<vector<int>> &triangle) {
		// write your code here

		int n = triangle.size();
		vector<int> v1(n , 99999);
		vector<int> v2(n , 99999);
		v2 [0] = triangle [0] [0];

		for (int i = 2; i <= n; ++i)
		{
			v1 = v2;
			v2 [0] = v1 [0] + triangle [i - 1] [0];
			for (int j = 1; j != i; ++j)
			{
				v2 [j] = (v1 [j - 1]<v1 [j] ? v1 [j - 1] : v1 [j]) + triangle [i - 1] [j];
			}
		}

		return *min_element(v2.begin() , v2.end());

	}
};
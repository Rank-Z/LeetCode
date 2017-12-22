class Solution {
public:
	/*
	* @param A: sorted integer array A which has m elements, but size of A is m+n
	* @param m: An integer
	* @param B: sorted integer array B which has n elements
	* @param n: An integer
	* @return: nothing
	*/
	void mergeSortedArray(int A[] , int m , int B[] , int n) {
		// write your code here
		int size = m + n;
		int arr [size];
		int count = 0;
		int i = 0;
		int j = 0;
		for (;;)
		{
			if (i == m || j == n)
				break;
			if (A [i]<B [j])
			{
				arr [count] = A [i];
				++i;
			}
			else
			{
				arr [count] = B [j];
				++j;
			}
			++count;
		}
		if (i == m)
		{
			for (; j != n; ++j)
				arr [count++] = B [j];
		}
		else
		{
			for (; i != m; ++i)
				arr [count++] = A [i];
		}

		for (int p = 0; p != size; ++p)
			A [p] = arr [p];

	}
};
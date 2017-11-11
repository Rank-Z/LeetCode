class Solution {
public:
	/*
	* @param A: an integer array
	* @return:
	*/
	void func(vector<int>& vi, int from, int last)
	{
		if (from >= last)return;

		int left = from;
		int right = last;
		int tmp = vi[from];

		for (; left<right;)
		{
			for (; vi[right] >= tmp&&right>left;)
				--right;
			for (; vi[left] <= tmp&&left<right;)
				++left;

			if (left<right)
			{
				int t = vi[left];
				vi[left] = vi[right];
				vi[right] = t;
			}
		}

		vi[from] = vi[left];
		vi[left] = tmp;

		func(vi, from, left - 1);
		func(vi, left + 1, last);
	}

	void sortIntegers2(vector<int>& A) {
		// write your code here
		func(A, 0, A.size() - 1);
	}
};
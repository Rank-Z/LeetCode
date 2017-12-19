class Solution {
public:
	/*
	* @param nums: Given an integers array A
	* @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
	*/
	vector<long long> productExcludeItself(vector<int> &nums) {
		// write your code here
		unsigned size = nums.size();
		if (size == 1)
			return vector<long long> {1};
		long long* arr1 = new long long [size];
		long long* arr2 = new long long [size];


		long long tmp = 1;
		int pos = 0;
		for (auto&t : nums)
		{
			tmp *= t;
			arr1 [pos++] = tmp;
		}
		tmp = 1;
		pos = size - 1;

		for (auto it = nums.rbegin(); it != nums.rend(); ++it)
		{
			tmp *= (*it);
			arr2 [pos--] = tmp;
		}

		vector<long long> ret(size);
		pos = 0;

		for (int i = 0; i != size; ++i)
		{
			if (i == 0)
				ret [i] = arr2 [i + 1];
			else if (i == (size - 1))
				ret [i] = arr1 [i - 1];
			else
				ret [i] = arr1 [i - 1] * arr2 [i + 1];
		}
		return ret;
	}
};
class Solution {
public:
	/*
	* @param A: sorted integer array A
	* @param B: sorted integer array B
	* @return: A new sorted integer array
	*/
	vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
		// write your code here
		for (auto&t : B)
			A.push_back(t);
		sort(A.begin(), A.end());
		return A;
	}
};
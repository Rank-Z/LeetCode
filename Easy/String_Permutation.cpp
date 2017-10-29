#include<array>
class Solution {
public:
	/*
	* @param A: a string
	* @param B: a string
	* @return: a boolean
	*/
	bool Permutation(string &A, string &B) {
		// write your code here

		array<int, 128> a1 = { 0 };
		array<int, 128> b1 = { 0 };
		for (auto& t : A)
			a1[static_cast<int>(t)]++;
		for (auto &t : B)
			b1[static_cast<int>(t)]++;
		if (a1 == b1)
			return true;
		else
			return false;
	}
};
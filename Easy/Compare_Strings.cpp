class Solution {
public:
	/*
	* @param A: A string
	* @param B: A string
	* @return: if string A contains all of the characters in B return true else return false
	*/
	bool compareStrings(string &A , string &B) {
		// write your code here
		for (auto&t : B)
		{
			auto it = find(A.begin() , A.end() , t);
			if (it == A.end())
				return false;
			else
				A.erase(it);
		}

		return true;
	}
};
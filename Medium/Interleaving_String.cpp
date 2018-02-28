class Solution {
public:
	/**
	* @param s1: A string
	* @param s2: A string
	* @param s3: A string
	* @return: Determine whether s3 is formed by interleaving of s1 and s2
	*/

	bool func(string::iterator it1, string::iterator end1, string::iterator it2,
		string::iterator end2, string::iterator it3, string::iterator end3)
	{
		if (it3==end3)
		{
			if ((it1==end1)&&(it2==end2))
				return true;
			else
				return false;
		}

		if (it1==end1)
			return std::equal(it2, end2, it3, end3);
		if (it2==end2)
			return std::equal(it1, end1, it3, end3);


		if ((*it1)==(*it3))
		{
			if (func(it1+1, end1, it2, end2, it3+1, end3)==true)
				return true;
		}
		if ((*it2)==(*it3))
		{
			if (func(it1, end1, it2+1, end2, it3+1, end3)==true)
				return true;
		}

		return false;


	}

	bool isInterleave(string &s1, string &s2, string &s3) {
		// write your code here
		return func(s1.begin(), s1.end(), s2.begin(), s2.end(), s3.begin(), s3.end());
	}
};
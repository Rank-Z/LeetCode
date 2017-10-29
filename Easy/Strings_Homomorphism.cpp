class Solution {
public:
	/*
	* @param s: a string
	* @param t: a string
	* @return: true if the characters in s can be replaced to get t or false
	*/
	bool isIsomorphic(string s, string t) {
		// write your code here
		if (s.size() != t.size())
			return false;
		array<unsigned, 128> as = { 0 };
		array<unsigned, 128> at = { 0 };
		int size = s.size();
		for (int i = 0; i != size; ++i)
		{
			int si = (int)(*(s.begin() + i));
			int ti = (int)(*(t.begin() + i));
			as[si] += (i + 1);
			at[ti] += (i + 1);
			if (as[si] != at[ti])
				return false;
		}
		return true;
	}
};
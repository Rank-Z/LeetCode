class Solution {
public:
	/*
	* @param dictionary: an array of strings
	* @return: an arraylist of strings
	*/
	vector<string> longestWords(vector<string> &dictionary) {
		// write your code here
		int maxsize = 0;
		for (auto&t : dictionary)
			if (t.size()>maxsize)
			{
				maxsize = t.size();
			}

		vector<string> ret;
		for (auto&t : dictionary)
			if (t.size() == maxsize)
				ret.push_back(t);
		return ret;
	}
};
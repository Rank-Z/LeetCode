class Solution {
public:
	/*
	* @param n: the nth
	* @return: the nth sequence
	*/
	string countAndSay(int n) {
		// write your code here
		string last = "1";
		string next = last;
		for (int i = 1; i<n; ++i)
		{
			last = next;
			next.clear();
			for (auto it = last.begin(); it<last.end();)
			{
				auto it2 = it;
				for (; it2 != last.end() && *it == *it2; ++it2);
				int count = it2 - it;
				next += to_string(count) + *it;
				it = it2;
			}
		}
		return next;
	}
};
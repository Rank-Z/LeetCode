class Solution {
public:
	/*
	* @param A: A list of integers
	* @param elem: An integer
	* @return: The new length after remove
	*/
	int removeElement(vector<int> &A , int elem) {
		// write your code here
		for (auto it = A.begin(); it != A.end();)
		{
			if (*it == elem)
			{
				if (it == A.begin())
				{
					A.erase(it);
				}
				else
				{
					auto t = it - 1;
					A.erase(it);
					it = t;
				}
			}
			else
				++it;
		}
		return A.size();
	}
};
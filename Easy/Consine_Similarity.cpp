class Solution {
public:
	/*
	* @param A: An integer array
	* @param B: An integer array
	* @return: Cosine similarity
	*/
	double cosineSimilarity(vector<int> &A, vector<int> &B) {
		// write your code here
		if (A.empty())return 2.0000;
		int top = 0;
		int l1 = 0;
		int l2 = 0;
		auto it1 = A.begin();
		auto it2 = B.begin();
		for (; it1 != A.end(); ++it1, ++it2)
		{
			top += *it1 * *it2;
			l1 += *it1 * *it1;
			l2 += *it2 * *it2;
		}
		if (l1 == 0 || l2 == 0)return 2.0000;
		double t1 = sqrt(l1);
		double t2 = sqrt(l2);

		double low = t1*t2;
		return (double)top / low;


	}
};
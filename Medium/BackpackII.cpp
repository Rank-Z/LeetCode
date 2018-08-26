class Solution {
public:
	/**
	* @param m: An integer m denotes the size of a backpack
	* @param A: Given n items with size A[i]
	* @param V: Given n items with value V[i]
	* @return: The maximum value
	*/
	int backPackII(int m, vector<int> &A, vector<int> &V) {
		// write your code here

		int n=A.size();
		int* pre=new int [m];
		int* cur=new int [m];

		for (int i=0; i<m; ++i)
			if (i+1<A [0])
				pre [i]=0;
			else
				pre [i]=V [0];

		for (int i=1; i<n; ++i)
		{
			for (int j=0; j<m; ++j)
			{
				if (j+1<A [i])
					cur [j]=pre [j];
				else
					cur [j]=max(pre [j], V [i]+pre [j-A [i]]);
			}
			copy(cur, cur+m, pre);
		}
		return cur [m-1];

	}
};
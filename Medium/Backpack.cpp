class Solution {
public:
	/**
	* @param m: An integer m denotes the size of a backpack
	* @param A: Given n items with size A[i]
	* @return: The maximum size
	*/
	int backPack(int m, vector<int> A) {
		// write your code here

		int num=A.size();
		int* pre=new int [m];
		int* cur=new int [m];

		for (int i=0; i!=m; ++i)
			if (i+1<A [0])
				pre [i]=0;
			else
				pre [i]=A [0];

		for (int i=1; i<num; ++i)
		{
			for (int j=0; j<m; ++j)
				if (j+1<A [i])
					cur [j]=pre [j];
				else
					cur [j]=max(pre [j], A [i]+pre [j-A [i]]);
			copy(cur, cur+m, pre);
		}

		return pre [m-1];

	}
};
class Solution {
public:
	/**
	* @param s: a string
	* @return: an integer
	*/
	int lengthOfLongestSubstring(string &s) {
		// write your code here

		int* arr=new int [s.size()];

		for (int i=0; i!=s.size(); ++i)
		{
			if (i==0)
				arr [0]=1;
			else
			{
				auto end=s.begin()+i;
				auto from=end-arr [i-1];
				for (--end; end!=from; --end)
				{
					if (*end==s [i])
						break;
				}
				if (end==from)
				{
					if (*from==s [i])
						arr [i]=arr [i-1];
					else
						arr [i]=arr [i-1]+1;
				}
				else
				{
					arr [i]=(s.begin()+i)-end;
				}
			}
		}

		return *max_element(arr, &arr [s.size()]);


	}
};
class Solution {
public:
	/**
	* @param nums: The integer array.
	* @param target: Target number to find.
	* @return: The first position of target. Position starts from 0.
	*/
	int binarySearch(vector<int> &array, int target) {
		// write your code here
		int low = 0;
		int high = array.size() - 1;
		int mid = (low + high) / 2;

		for (; low <= high;)
		{
			if (array[mid] == target)
			{
				for (; mid >= 0 && array[mid] == target; --mid);
				return mid + 1;
			}
			else if (array[mid]>target)
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
			mid = (low + high) / 2;
		}
		return -1;
	}
};
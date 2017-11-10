class Solution {
public:
	/*
	* @param nums: An integer array sorted in ascending order
	* @param target: An integer
	* @return: An integer
	*/
	int findPosition(vector<int> &nums, int target) {
		// write your code here
		int size = nums.size();
		int low = 0;
		int high = size - 1;
		int mid = (low + high) / 2;
		for (; high>low;)
		{
			if (nums[mid] == target)return mid;
			if (nums[mid]<target)
			{
				low = mid + 1;
			}
			else
			{
				high = mid;
			}
			mid = (low + high) / 2;
		}
		return -1;
	}
};

//不经大脑直接写的竟然过了
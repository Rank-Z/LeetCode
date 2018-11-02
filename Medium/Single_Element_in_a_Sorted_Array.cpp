class Solution {
public:
	/**
	* @param nums: a list of integers
	* @return: return a integer
	*/
	int singleNonDuplicate(vector<int> &nums) {
		// write your code here

		int length = nums.size();
		int from = 0;
		int end = length - 1;
		int mid = end / 2;

		for (;; mid = (from + end) / 2)
		{
			if (mid == 0)
			{
				return nums.front();
			}
			else if (mid == length - 1)
			{
				return nums.back();
			}
			else
			{

				if ((*(nums.begin() + mid - 1)) != (*(nums.begin() + mid)))
				{
					if ((*(nums.begin() + mid)) != (*(nums.begin() + mid + 1)))
					{
						return (*(nums.begin() + mid));
					}
					else
					{
						if ((mid - from) % 2)
						{
							end = mid - 1;
						}
						else
						{
							from = mid + 2;
						}
					}
				}
				else
				{
					if (((mid - 1) - from) % 2)
					{
						end = mid - 2;
					}
					else
					{
						from = mid + 1;
					}
				}
			}
		}
	}
};
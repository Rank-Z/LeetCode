class Solution {
public:
	/**
	* @param nums: The integer array you should partition
	* @param k: An integer
	* @return: The index after partition
	*/
	int partitionArray(vector<int> &nums, int k) {
		// write your code here
		auto lamb=[k] (int i)->bool {return (i<k ? true : false); };
		std::partition(nums.begin(), nums.end(), lamb);
		auto it=nums.begin();
		for (; (it!=nums.end())&&((*it)<k); ++it)
			;
		return it-nums.begin();


	}
};
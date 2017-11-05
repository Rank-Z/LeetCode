class Solution {
public:

	/*
	* @param nums1: an integer array
	* @param nums2: an integer array
	* @return: an integer array
	*/
	vector<int> intersection(vector<int> nums1, vector<int> nums2) {
		// write your code here
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		vector<int> res;
		res.reserve(nums1.size() > nums2.size() ? nums1.size() : nums2.size());
		auto it1 = nums1.begin();
		auto it2 = nums2.begin();
		for (; ; )
		{
			if (it1 == nums1.end() || it2 == nums2.end())
				break;
			if ((*it1) == (*it2))
			{
				res.push_back(*it1);
				++it1;
				++it2;
			}
			else if ((*it1) < (*it2))
				++it1;
			else
				++it2;
		}
		return res;
	}
};
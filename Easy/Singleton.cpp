class Solution {
public:
	/**
	* @return: The same instance of this class every time
	*/

	static Solution* getInstance() {
		// write your code here
		if (!instance_)
		{
			return instance_ = new Solution;
		}
		return instance_;
	}

private:
	static Solution * instance_;
};

Solution* Solution::instance_ = nullptr;

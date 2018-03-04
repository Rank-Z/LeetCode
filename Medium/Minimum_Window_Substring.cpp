class Solution {
public:
	/**
	* @param source : A string
	* @param target: A string
	* @return: A string denote the minimum window, return "" if there is no such a string
	*/
	string minWindow(string &source, string &target) {
		// write your code here
		if (target.size()>source.size())
			return string();
		string ret;
		auto from=source.begin();
		auto end=source.end()-target.size()+1;
		for (; from!=end; ++from)
		{
			if (find(target.begin(), target.end(), *from)!=target.end())
			{
				string tar_copy=target;
				auto it=from;
				for (; it!=source.end(); ++it)
				{
					auto it_temp=find(tar_copy.begin(), tar_copy.end(), *it);
					if (it_temp!=tar_copy.end())
					{
						tar_copy.erase(it_temp);
						if (tar_copy.empty())
						{
							string temp(from, it+1);
							if (ret.empty()||(ret.size()>temp.size()))
								ret=temp;
						}
					}
				}
			}
		}
		return ret;
	}
};
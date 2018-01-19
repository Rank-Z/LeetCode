/**
* Definition of Interval:
* classs Interval {
*     int start, end;
*     Interval(int start, int end) {
*         this->start = start;
*         this->end = end;
*     }
*/


class Solution {
public:
	/*
	* @param intervals: interval list.
	* @return: A new interval list.
	*/
	vector<Interval> merge(vector<Interval> &intervals) {
		// write your code here
		sort(intervals.begin() , intervals.end() , [] (Interval i1 , Interval i2) {return i1.start<i2.start; });
		vector<Interval> ret;
		bool change = false;
		for (auto it = intervals.begin();; ++it)
		{
			if (it == intervals.end())
			{
				if (change)
				{
					intervals = ret;
					change = false;
					it = intervals.begin();
					ret.clear();
				}
				else
					break;
			}

			if ((it == --intervals.end()) || (*it).end<it [1].start)
				ret.push_back(*it);
			else
			{
				ret.emplace_back((*it).start , it [1].end>(*it).end ? it [1].end : (*it).end);
				++it;
				change = true;
			}
		}
		return ret;
	}
};
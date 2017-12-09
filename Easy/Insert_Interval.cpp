/**
* Definition of Interval:
* class Interval {
* public:
*     int start, end;
*     Interval(int start, int end) {
*         this->start = start;
*         this->end = end;
*     }
* }
*/


class Solution {
public:
	/*
	* @param intervals: Sorted interval list.
	* @param newInterval: new interval.
	* @return: A new interval list.
	*/
	vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
		// write your code here
		vector<Interval> ret;
		int count = 0;
		while (count<intervals.size() && intervals[count].end<newInterval.start)
		{
			ret.push_back(intervals[count++]);
		}
		while (count<intervals.size() && intervals[count].start <= newInterval.end)
		{
			newInterval.start = min(newInterval.start, intervals[count].start);
			newInterval.end = max(newInterval.end, intervals[count].end);
			++count;
		}
		ret.push_back(newInterval);
		while (count<intervals.size())
			ret.push_back(intervals[count++]);

		return ret;
	}
};
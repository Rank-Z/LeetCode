class Solution {
public:
	/*
	* @param source: source string to be scanned.
	* @param target: target string containing the sequence of characters to match
	* @return: a index to the first occurrence of target in source, or -1  if target is not part of source.
	*/
	int strStr(const char *source, const char *target) {
		// write your code here
		if (source == nullptr || target == nullptr)
			return -1;
		if (*target == '\0')
			return 0;
		if (*source == '\0')
			return -1;
		int ret = 0;
		for (; *source != '\0'; ++source)
		{
			if (*source == *target)
			{
				const char* s = source;
				const char* t = target;
				for (; *t != '\0';)
				{
					if (*t != *s)
						break;
					++t;
					++s;
				}
				if (*t == '\0')
					return ret;
			}
			++ret;
		}
		return -1;
	}
};
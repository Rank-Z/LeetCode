class Solution {
public:
	/*
	* @param key: A string you should hash
	* @param HASH_SIZE: An integer
	* @return: An integer
	*/
	int hashCode(string &key , int HASH_SIZE) {
		// write your code here
		int size = key.size();
		long long hashnum = 0;
		for (auto&t : key)
		{
			hashnum *= 33;
			hashnum += t;
			hashnum %= HASH_SIZE;
		}
		return hashnum;
	}
};
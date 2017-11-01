// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
	/**
	* @param n an integer
	* @return the number you guess
	*/
	int guessNumber(int n) {
		// Write your code here
		long long low = 1;
		long long high = n;
		long long gue = (1 + n) / 2;
		for (; ;)
		{
			if (guess(gue) > 0)
				low = gue + 1;
			else if (guess(gue) < 0)
				high = gue - 1;
			else
				break;
			gue = (low + high) / 2;
		}
		return gue;
	}
};
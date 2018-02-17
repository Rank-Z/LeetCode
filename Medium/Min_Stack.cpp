class MinStack {
public:
	MinStack() {
		// do intialization if necessary
		top = 0;
	}

	/*
	* @param number: An integer
	* @return: nothing
	*/
	void push(int number) {
		// write your code here
		if (mind.empty())
			mind.push_back(number);
		else
		{
			if (number <= mind.front())
				mind.push_front(number);
		}
		stack.push_back(number);
	}

	/*
	* @return: An integer
	*/
	int pop() {
		// write your code here
		auto it = stack.end();
		--it;
		int ret = *it;
		stack.erase(it);
		if (ret == mind.front())
			mind.pop_front();
		return ret;
	}

	/*
	* @return: An integer
	*/
	int min() {
		// write your code here
		return mind.front();
	}

	vector<int> stack;
	int top;
	deque<int> mind;
};
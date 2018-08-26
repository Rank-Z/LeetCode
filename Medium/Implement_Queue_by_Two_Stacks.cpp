class MyQueue {
public:
	MyQueue() {
		// do intialization if necessary
	}

	/*
	* @param element: An integer
	* @return: nothing
	*/
	void push(int element) {
		// write your code here

		s1.push(element);
	}

	/*
	* @return: An integer
	*/
	int pop() {
		// write your code here

		for (; !s1.empty();)
		{
			s2.push(s1.top());
			s1.pop();
		}
		int ret = s2.top();
		s2.pop();
		for (; !s2.empty();)
		{
			s1.push(s2.top());
			s2.pop();
		}
		return ret;
	}

	/*
	* @return: An integer
	*/
	int top() {
		// write your code here


		for (; !s1.empty();)
		{
			s2.push(s1.top());
			s1.pop();
		}
		int ret = s2.top();
		for (; !s2.empty();)
		{
			s1.push(s2.top());
			s2.pop();
		}

		return ret;
	}

	stack<int> s1;
	stack<int> s2;
};






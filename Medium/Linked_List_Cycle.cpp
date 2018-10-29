class Solution {
public:
	/**
	* @param head: The first node of linked list.
	* @return: True if it has a cycle, or false
	*/
	bool hasCycle(ListNode * head) {
		// write your code here

		if (head == nullptr)
			return false;

		ListNode* slow_ptr = head;
		ListNode* fast_ptr = head->next;
		for (; (slow_ptr != nullptr) && (fast_ptr != nullptr);)
		{
			if (slow_ptr == fast_ptr)
			{
				return true;
			}

			slow_ptr = slow_ptr->next;
			fast_ptr = fast_ptr->next;
			if (fast_ptr == nullptr)
			{
				return false;
			}
			else
			{
				fast_ptr = fast_ptr->next;
			}
		}
		return false;
	}
};
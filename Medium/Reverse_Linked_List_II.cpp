
class Solution {
public:
	/**
	* @param head: ListNode head is the head of the linked list
	* @param m: An integer
	* @param n: An integer
	* @return: The head of the reversed ListNode
	*/

	void reverse(ListNode* from, ListNode* to)
	{
		ListNode* last = nullptr;
		ListNode* now;
		ListNode* next;

		now = from;

		for (;;)
		{
			next = now->next;

			now->next = last;
			last = now;
			now = next;
			if (last == to)
			{
				break;
			}
		}
	}


	ListNode * reverseBetween(ListNode * head, int m, int n) {
		// write your code here

		if (m == n)
		{
			return head;
		}


		ListNode* m_node;
		ListNode* n_node;
		ListNode* last = nullptr;
		ListNode* next = nullptr;

		ListNode* np = head;
		for (int i = 1;; ++i)
		{
			if (m == i)
			{
				m_node = np;
			}
			if (n == i)
			{
				n_node = np;
				break;
			}

			if (i < m)
			{
				last = np;
			}
			np = np->next;
		}
		if (m != 1)
		{
			last->next = n_node;
		}
		next = n_node->next;

		if (last == nullptr)
		{
			head = n_node;
		}
		else
		{
			last->next = n_node;
		}

		reverse(m_node, n_node);

		m_node->next = next;

		return head;
	}
};

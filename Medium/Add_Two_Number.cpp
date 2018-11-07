class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		ListNode* ret = nullptr;
		ListNode* now;
		now = new ListNode(0);
		bool up = false;
		for (; l1 != nullptr&&l2 != nullptr;)
		{
			int sum = l1->val + l2->val;
			if (up)
			{
				++sum;
				up = false;
			}
			if (sum > 9)
			{
				up = true;
				sum -= 10;
			}
			if (ret != nullptr)
			{
				now->next = new ListNode(sum);
				now = now->next;
			}
			else
			{
				ret = now;
				now->val = sum;
			}
			l1 = l1->next;
			l2 = l2->next;
		}

		ListNode* other;
		if (l1 == nullptr&&l2 != nullptr)
		{
			other = l2;
		}
		else if (l1 != nullptr&&l2 == nullptr)
		{
			other = l1;
		}
		else
		{
			if (up)
			{
				now->next = new ListNode(1);
			}
			return ret;
		}

		for (; other != nullptr; other = other->next)
		{
			if (up)
			{
				up = false;
				other->val++;
			}
			if (other->val > 9)
			{
				up = true;
				other->val -= 10;
			}

			now->next = new ListNode(other->val);
			now = now->next;
		}

		if (up)
		{
			{
				now->next = new ListNode(1);
			}
		}

		return ret;
	}
};
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/


class Solution {
public:
	/*
	* @param l1: the first list
	* @param l2: the second list
	* @return: the sum list of l1 and l2
	*/
	ListNode * addLists(ListNode * l1 , ListNode * l2) {
		// write your code here

		bool ac = false;
		ListNode* head = new ListNode;
		int sum = (l1->val) + (l2->val);
		if (sum>9)
		{
			sum -= 10;
			ac = true;
		}
		head->val = sum;
		ListNode* now = head;
		l1 = l1->next;
		l2 = l2->next;

		for (; l1 != nullptr || l2 != nullptr;)
		{
			if (l1 != nullptr&&l2 != nullptr)
			{
				sum = (l1->val) + (l2->val);
				l1 = l1->next;
				l2 = l2->next;
			}
			else if (l1 != nullptr)
			{
				sum = l1->val;
				l1 = l1->next;
			}
			else
			{
				sum = l2->val;
				l2 = l2->next;
			}

			if (ac)
			{
				++sum;
				ac = false;
			}
			if (sum>9)
			{
				sum -= 10;
				ac = true;
			}

			now->next = new ListNode;
			now->next->val = sum;
			now = now->next;

		}

		if (ac)
		{
			now->next = new ListNode;
			now->next->val = 1;
		}

		return head;
	}
};
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
	* @param head: a ListNode
	* @return: a ListNode
	*/
	ListNode * swapPairs(ListNode * head) {
		// write your code here
		ListNode* first = head;
		ListNode* second = head->next;
		for (; second != 0;)
		{
			first->val = (first->val) ^ (second->val);
			second->val = (first->val) ^ (second->val);
			first->val = (first->val) ^ (second->val);

			first = first->next->next;
			if (!first)break;
			second = second->next->next;
		}
		return head;
	}
};
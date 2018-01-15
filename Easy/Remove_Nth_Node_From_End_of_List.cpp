/**
* Definition of ListNode
* class ListNode {
* public:
*     int val;
*     ListNode *next;
*     ListNode(int val) {
*         this->val = val;
*         this->next = NULL;
*     }
* }
*/


class Solution {
public:
	/*
	* @param head: The first node of linked list.
	* @param n: An integer
	* @return: The head of linked list.
	*/
	ListNode * removeNthFromEnd(ListNode * head , int n) {
		// write your code here

		int count = 0;
		for (ListNode* t = head; t != nullptr; ++count)
			t = t->next;

		count -= n + 1;
		if (count<1)
			return head->next;
		ListNode* t = head;
		for (; count != 0; --count)
			t = t->next;


		t->next = t->next->next;

		return head;
	}
};
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
	* @return: Nth to last node of a singly linked list.
	*/
	ListNode * nthToLast(ListNode * head , int n) {
		// write your code here
		int size = 0;
		for (ListNode* t = head; t != nullptr; t = t->next)
			++size;

		int dif = size - n;

		for (; dif; --dif)
			head = head->next;

		return head;
	}
};
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
	* @param head: head is the head of the linked list
	* @return: head of linked list
	*/
	ListNode * deleteDuplicates(ListNode * head) {
		// write your code here

		if (head == nullptr)
			return nullptr;
		ListNode* first = head;
		ListNode* second = head->next;

		for (; second;)
		{
			if (first->val == second->val)
				first->next = second->next;
			else
				first = second;

			second = second->next;
		}
		return head;

	}
};
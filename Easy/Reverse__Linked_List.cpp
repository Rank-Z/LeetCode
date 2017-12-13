/**
* Definition of ListNode
*
* class ListNode {
* public:
*     int val;
*     ListNode *next;
*
*     ListNode(int val) {
*         this->val = val;
*         this->next = NULL;
*     }
* }
*/


class Solution {
public:
	/*
	* @param head: n
	* @return: The new head of reversed linked list.
	*/
	ListNode * reverse(ListNode * head) {
		// write your code here
		ListNode* last = nullptr;
		for (ListNode* next; head; head = next)
		{
			next = head->next;
			head->next = last;
			last = head;
		}
		return last;
	}
};
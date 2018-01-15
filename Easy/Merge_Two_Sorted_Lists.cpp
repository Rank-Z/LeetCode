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
	* @param l1: ListNode l1 is the head of the linked list
	* @param l2: ListNode l2 is the head of the linked list
	* @return: ListNode head of linked list
	*/
	ListNode * mergeTwoLists(ListNode * l1 , ListNode * l2) {
		// write your code here
		if (l1 == nullptr)
			return l2;
		if (l2 == nullptr)
			return l1;



		ListNode* head = nullptr;
		ListNode* now = nullptr;
		for (; l1 != nullptr&&l2 != nullptr;)
		{
			ListNode* temp;
			if (l1->val<l2->val)
			{
				temp = l1;
				l1 = l1->next;
			}
			else
			{
				temp = l2;
				l2 = l2->next;
			}
			if (head == nullptr)
				head = temp;
			if (now == nullptr)
				now = temp;
			else
			{
				now->next = temp;
				now = temp;
			}
		}
		if (l1 != nullptr)
			now->next = l1;
		else
			now->next = l2;

		return head;



	}
};
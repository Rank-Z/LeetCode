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
	* @param head: The first node of linked list
	* @param x: An integer
	* @return: A ListNode
	*/
	ListNode * partition(ListNode * head , int x) {
		// write your code here
		if (head == nullptr)
			return nullptr;
		ListNode* fh = nullptr;
		ListNode* front = nullptr;
		ListNode* bh = nullptr;
		ListNode* back = nullptr;
		for (; head;)
		{
			if (head->val<x)
			{
				if (fh == nullptr)
					fh = head;
				else
					front->next = head;
				front = head;
			}
			else
			{
				if (bh == nullptr)
					bh = head;
				else
					back->next = head;
				back = head;
			}
			head = head->next;
		}
		if (fh)
			front->next = bh;
		if (back)
			back->next = nullptr;

		if (fh)
			return fh;
		else
			return bh;

	}
};
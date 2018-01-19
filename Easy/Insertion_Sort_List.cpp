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
	* @return: The head of linked list.
	*/
	ListNode * insertionSortList(ListNode * head) {
		// write your code here
		if (head == nullptr)
			return nullptr;

		ListNode* now = head;
		for (; now->next != nullptr;)
		{
			if (head->val>now->next->val)
			{
				ListNode* temp = now->next->next;
				now->next->next = head;
				head = now->next;
				now->next = temp;
			}
			else for (ListNode* find = head;;)
			{
				if (find == now)
				{
					now = now->next;
					break;
				}
				if (find->next->val <= now->next->val)
					find = find->next;
				else
				{
					ListNode* temp = now->next->next;
					now->next->next = find->next;
					find->next = now->next;
					now->next = temp;
					break;
				}
			}
		}

		return head;
	}
};
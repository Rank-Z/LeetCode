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

		vector<int> vi;
		for (ListNode* t = head; t != nullptr; t = t->next)
			vi.push_back(t->val);

		sort(vi.begin() , vi.end());
		int pos = 0;
		for (ListNode* t = head; t != nullptr; t = t->next)
			t->val = vi [pos++];

		return head;
	}
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{

		ListNode myNode(0);
		ListNode* curr = &myNode;
		int carry = 0;
		while (l1 != NULL || l2 != NULL)
		{
			int num1 = (l1 != 0) ? l1->val : 0;
			int num2 = (l2 != 0) ? l2->val : 0;
			int sum = num1 + num2 + carry;

			int put = sum / 10;
			carry = sum % 10;

			ListNode tmp(put);
			curr->next = &tmp;
			curr = curr->next;
		}

		if (carry)
		{
			ListNode tmp(1);
			curr->next = &tmp;
			curr = curr->next;
		}
		return ;
	}
};

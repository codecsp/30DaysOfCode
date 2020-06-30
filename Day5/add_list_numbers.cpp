// 2. Add Two Numbers
// Medium

// 8250

// 2110

// Add to List

// Share
// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Example:

// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8
// Explanation: 342 + 465 = 807.

//leetcode submission : https://leetcode.com/problems/add-two-numbers/

//reference : nick white youtube video

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

			carry = sum / 10;
			int put = sum % 10;


			curr->next = new ListNode(put);
			curr = curr->next;

			if (l1 != NULL)l1 = l1->next;
			if (l2 != NULL)l2 = l2->next;
		}

		if (carry)
		{
			curr->next = new ListNode(1);
		}
		return myNode.next;
	}
};

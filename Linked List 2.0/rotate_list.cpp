/*
Rotate List

Given a linked list, rotate the list to the right by k places, where k is non-negative.

Example 1:

Input: 1->2->3->4->5->NULL, k = 2
Output: 4->5->1->2->3->NULL
Explanation:
rotate 1 steps to the right: 5->1->2->3->4->NULL
rotate 2 steps to the right: 4->5->1->2->3->NULL


submitted at leetcode: https://leetcode.com/problems/rotate-list/

*/

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
	ListNode* rotateRight(ListNode* head, int k)
	{

		int length = 0;

		ListNode* tmp = head;
		while (tmp != NULL)
		{
			length++;
			tmp = tmp->next;
		}
		k = k % length;
		if (length == 0)
			return head;
		else if (k == 0)
		{
			return head;
		}
		else
		{
			int cnt = length - k - 1;
		}



	}
};
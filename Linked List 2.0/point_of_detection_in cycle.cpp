/*
Linked List Cycle II
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.

Note: Do not modify the linked list.

*/

//submitted at leetcode : https://leetcode.com/problems/linked-list-cycle-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode *detectCycle(ListNode *head)
	{

		ListNode* slow = head;
		ListNode* fast = head;

		bool ans = false;
		while (slow && fast && fast->next)
		{

			slow = slow->next;
			fast = fast->next->next;

			if (slow == fast)
			{
				ans = true;
				break;
			}
		}

		if (ans != true)
			ans = false;

		if (ans == false)
			return NULL;
		else
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return slow;
		}
	}
};
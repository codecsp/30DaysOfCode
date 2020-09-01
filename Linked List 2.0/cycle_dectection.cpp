/*Linked List Cycle

Given a linked list, determine if it has a cycle in it.

To represent a cycle in the given linked list,
we use an integer pos which represents the position (0-indexed)
in the linked list where tail connects to. If pos is -1,
then there is no cycle in the linked list.

*/

/*

Approach 1: if one can change the structure of Node then we can simply add a flag visited to the node.
This can help us to identify a repeated node, if circle is present.

approach  2: cycle detection using slow and fast pointer

submitted at leetcode: https://leetcode.com/problems/linked-list-cycle/
refernce video :https://www.youtube.com/watch?v=8NBkGnY5iJ8

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution
{
public:
	bool hasCycle(ListNode *head)
	{

		if (head == NULL || head->next == NULL)
			return false;

		ListNode* slow = head;
		ListNode* fast = head;

		while (fast && slow && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;

			if (slow == fast)
				return true;
		}
		return false;

	}
};

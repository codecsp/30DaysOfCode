// merge two sorted linked list


// Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.

// Example:

// Input: 1->2->4, 1->3->4
// Output: 1->1->2->3->4->4

//submitted at leetcode : https://leetcode.com/problems/merge-two-sorted-lists/
// hint : errichto video @ https://www.youtube.com/watch?v=EvgZCUhTosc

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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
	{
		ListNode mystart(-1);   // trick to minimize some conditions
		ListNode* last = &mystart;
		while (l1 && l2)
		{
			if (l1->val < l2->val)
			{
				last->next = l1;
				last = l1;
				l1 = l1->next;
			}
			else
			{
				last->next = l2;
				last = l2;
				l2 = l2->next;
			}
		}

		if (l1 != NULL)
			last->next = l1;
		if (l2 != NULL)
			last->next = l2;

		return mystart.next; //. is only required
	}
};
// Write a program to find the node at which the intersection of two singly linked lists begins.

// For example, the following two linked lists:

// Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
// Output: Reference of the node with value = 8
// Input Explanation: The intersected nodes value is 8 (note that this must not be 0 if the two lists intersect).
//  From the head of A, it reads as [4,1,8,4,5].
//  From the head of B, it reads as [5,6,1,8,4,5].
//  There are 2 nodes before the intersected node in A;
//  There are 3 nodes before the intersected node in B.

//  submitted at leetcode: https://leetcode.com/problems/intersection-of-two-linked-lists/

//  easy question :
//

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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
	{

		std::map<key, value> map;
		int l1 = 0, l2 = 0;
		ListNode* tmp1 = headA;
		ListNode*tmp2 = headB;
		while (tmp1)
		{
			l1++;
			tmp1 = tmp1->next;
		}

		while (tmp2)
		{
			l2++;
			tmp2 = tmp2->next;
		}

		int diff = 0;
		if (l1 < l2)
		{
			diff = l2 - l1;

			while (diff--)
			{
				headB = headB->next;
			}
		}
		else
		{
			diff = l1 - l2;
			while (diff--)
			{
				headA = headA->next;
			}
		}

		while (headA && headB)
		{
			if (headB == headA)
			{
				return headA;
				break;
			}
			else
			{
				headA = headA->next;
				headB = headB->next;
			}
		}
		return NULL;
	}
};
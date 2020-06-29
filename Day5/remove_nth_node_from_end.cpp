// Remove Nth Node From End of List

// Given a linked list, remove the n-th node from the end of list and return its head.

// Example:

// Given linked list: 1->2->3->4->5, and n = 2.

// After removing the second node from the end, the linked list becomes 1->2->3->5.

// submitted at : https://leetcode.com/problems/remove-nth-node-from-end-of-list
// common logic : can be improved using fast and slow pointer

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

/* Hahaha
_._ _..._ .-',     _.._(`))
'-. `     '  /-._.-'    ',/
   )         \            '.
  / _    _    |             \
 |  a    a    /              |
 \   .-.                     ;
  '-('' ).-'       ,'       ;
     '-;           |      .'
        \           \    /
        | 7  .__  _.-\   \
        | |  |  ``/  /`  /
       /,_|  |   /,_/   /
          /,_/      '`-'
*/

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n)
	{
		int cnt = 0;
		ListNode* tmp = head;
		while (tmp != NULL)
		{
			cnt++ ;
			tmp = tmp->next;
		}
		int remov_element_minus_one = cnt - n ;

		if (remov_element_minus_one == 0)
			return head->next;

		tmp = head;
		int it = 0;
		while (tmp != NULL)
		{
			++it;
			if (it == remov_element_minus_one)
			{
				break;
			}
			else
			{
				tmp = tmp->next;
			}
		}

		ListNode* tmp2 = tmp->next->next;
		tmp->next = tmp2;
		//delete tmp2;

		return head;

	}
};

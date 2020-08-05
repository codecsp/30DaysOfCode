/*
Given a singly linked list, determine if it is a palindrome.

Example 1:

Input: 1->2
Output: false
Example 2:

Input: 1->2->2->1
Output: true


submitted at leetcode: https://leetcode.com/problems/palindrome-linked-list/

reference video (Nick white): https://www.youtube.com/watch?v=wk4QsvwQwdQ
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

	ListNode * reverse(ListNode * head)
	{
		ListNode* prev = NULL;

		while (head)
		{
			ListNode* next = head->next;
			head->next = prev;
			prev = head;
			head = next;
		}
		return prev;
	}
	bool isPalindrome(ListNode* head)
	{

		ListNode* fast = head;
		ListNode* slow = head;

		while (fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
		}

		slow = reverse(slow);

		//cout<<"slow: "<<slow->val<<endl;

		fast = head;

		while (slow)
		{
			//cout<<fast->val<<" : "<<slow->val<<endl;

			if (fast->val != slow->val)
			{
				return false;
			}
			else
			{
				fast = fast->next;
				slow = slow->next;
			}
		}
		return true;
	}
};
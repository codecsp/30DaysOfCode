// Reverse a singly linked list.
// Example:

// Input: 1->2->3->4->5->NULL
// Output: 5->4->3->2->1->NULL

// submitted at leetode:https://leetcode.com/problems/reverse-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode
 {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//iterative
class Solution
{
public:
	ListNode* reverseList(ListNode* head)
	{

		ListNode* next = NULL ; //
		ListNode* prev = NULL ; //
		ListNode* curr = head ; //1

		while (curr)     //1->2->3->4->NULL
		{
			next = curr->next; //2
			curr->next = prev;//2=NULL
			prev = curr; //1
			curr = next; //2  
		}

		return prev;
	}
};


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

//recursive

class Solution
{
	ListNode* head1 = NULL;
public:



	void reverse(ListNode* prev, ListNode* curr)
	{

		if (!curr)
			return;
		if (!curr->next) //only one element
		{
			head1 = curr;
			head1->next = prev;
			return;
		}

		reverse(curr, curr->next);
		curr->next = prev;
		return ;
	}


	ListNode* reverseList(ListNode* head)
	{
		//head1 = head;
		reverse(NULL, head);

		return head1;
	}
};

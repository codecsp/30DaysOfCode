// 237. Delete Node in a Linked List
// Easy

// 1547

// 7031

// Add to List

// Share
// Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

// Given linked list -- head = [4,5,1,9], which looks like following:

// leetcode solution : https://leetcode.com/problems/delete-node-in-a-linked-list/

class Solution
{
public:
	void deleteNode(ListNode* node)
	{
		ListNode* next_node = node->next;
		node->val = next_node->val;
		node->next = next_node->next ;
		return;
	}
};
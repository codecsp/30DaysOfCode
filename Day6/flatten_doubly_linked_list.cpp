/*
Flatten a Multilevel Doubly Linked List

You are given a doubly linked list which in addition to the next and previous pointers,
it could have a child pointer, which may or may not point to a separate doubly linked list.
These child lists may have one or more children of their own, and so on,
to produce a multilevel data structure, as shown in the example below.

Flatten the list so that all the nodes appear in a single-level,
doubly linked list. You are given the head of the first level of the list.


submitted at leetcode : https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/

*/
/*
// Definition for a Node.
class Node
{
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution
{
	Node *tail = NULL;
public:
	Node* flatten(Node* head)
	{
		Node *cur = head, *prev = NULL;

		while (cur)
		{
			if (!cur->child)
			{
				prev = cur, cur = cur->next;
				continue;
			}

			Node *nextNode = cur->next, *childNode = cur->child;

			flatten(childNode);

			cur->next = childNode;
			childNode->prev = cur;
			cur->child = NULL;

			tail->next = nextNode;
			if (nextNode)
				nextNode->prev = tail;

			prev = tail;
			cur = nextNode;
		}

		tail = prev;
		return head;
	}
};
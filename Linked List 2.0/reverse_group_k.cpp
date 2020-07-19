// leetcode Hard problem :Reverse Nodes in k-Group

// Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

// k is a positive integer and is less than or equal to the length of the linked list.
// If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.

// Example:

// Given this linked list: 1->2->3->4->5

// For k = 2, you should return: 2->1->4->3->5

// For k = 3, you should return: 3->2->1->4->5

// submitted at leetcode : https://leetcode.com/problems/reverse-nodes-in-k-group/

// reference video : https://www.youtube.com/watch?v=IsD4Fo1K85Q

class Solution
{
public:


    ListNode* reverseKGroup(ListNode* head, int k)
    {

        int num = 0;
        ListNode* tmp = head;
        while (tmp)
        {
            num++;
            tmp = tmp->next;
        }
        if (num < k)
            return head;

        ListNode* next = NULL;
        ListNode* curr;
        ListNode* prev = NULL;
        curr = head;
        int cnt = 0;
        int flag = 0;
        while (curr != NULL && cnt < k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }
        if (next != NULL)
        {
            head->next = reverseKGroup(next, k);
        }

        return prev;

    }
};
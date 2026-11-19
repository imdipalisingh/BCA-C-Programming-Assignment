/*
Problem Name:Reverse Linked List
LeetCode Problem Number:04
Topic:POINTES

Problem Statement:Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* previous = NULL;
    struct ListNode* current = head;
    struct ListNode* nextNode = NULL;

    while (current != NULL)
    {
        /* Save the next node before changing the link. */
        nextNode = current->next;

        /* Point this node backward. */
        current->next = previous;

        /* Move all three pointers forward. */
        previous = current;
        current = nextNode;
    }

    return previous;
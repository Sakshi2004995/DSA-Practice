# 19. Remove Nth Node From End of List

## Problem
Given the head of a linked list, remove the nth node from the end of the list and return its head.

## Approach
- Create a dummy node pointing to the head.
- Use two pointers: fast and slow.
- Move the fast pointer n+1 steps ahead.
- Move both pointers until fast reaches the end.
- Remove the target node by updating slow->next.

## Time Complexity
O(N)

## Space Complexity
O(1)
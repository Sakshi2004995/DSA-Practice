# 21. Merge Two Sorted Lists

## Problem
Merge two sorted linked lists into one sorted linked list and return its head.

## Approach
- Create a dummy node.
- Use a pointer `current` to build the merged list.
- Compare the current nodes of both lists.
- Attach the smaller node to the merged list.
- Move the corresponding pointer forward.
- After one list ends, attach the remaining nodes of the other list.

## Time Complexity
O(n + m)

## Space Complexity
O(1)
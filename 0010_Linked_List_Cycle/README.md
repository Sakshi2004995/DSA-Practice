# 141. Linked List Cycle

## Problem
Determine whether a linked list contains a cycle.

## Approach
- Use two pointers:
  - Slow pointer moves one step.
  - Fast pointer moves two steps.
- If both pointers meet, a cycle exists.
- If the fast pointer reaches NULL, there is no cycle.

## Time Complexity
O(n)

## Space Complexity
O(1)
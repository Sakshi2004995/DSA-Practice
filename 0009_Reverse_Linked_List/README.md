# 206. Reverse Linked List

## Problem
Reverse a singly linked list and return the new head.

## Approach
- Initialize three pointers:
  - `prev = nullptr`
  - `curr = head`
  - `next`
- Traverse the list.
- Store the next node.
- Reverse the current node's pointer.
- Move `prev` and `curr` one step ahead.
- Return `prev` as the new head.

## Time Complexity
O(n)

## Space Complexity
O(1)
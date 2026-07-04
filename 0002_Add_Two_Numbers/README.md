# LeetCode 2 - Add Two Numbers

## Problem Statement

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each node contains a single digit. Add the two numbers and return the sum as a linked list.

---

## Approach

- Create a dummy node to build the result linked list.
- Initialize a pointer `current` to the dummy node.
- Initialize `carry = 0`.
- Traverse both linked lists until both become `NULL` and no carry remains.
- Add the values of the current nodes and the carry.
- Store the last digit (`sum % 10`) in a new node.
- Update the carry (`sum / 10`).
- Move the pointers to the next nodes.
- Return `dummy->next`.

---

## Algorithm

1. Create a dummy node.
2. Initialize `current = dummy`.
3. Initialize `carry = 0`.
4. Repeat while `l1`, `l2`, or `carry` exists:
   - `sum = carry`
   - Add `l1->val` if `l1` exists.
   - Add `l2->val` if `l2` exists.
   - Update `carry = sum / 10`
   - Create a new node with `sum % 10`
   - Move `current` to the new node.
5. Return `dummy->next`.

---

## Time Complexity

**O(max(n, m))**

where `n` and `m` are the lengths of the two linked lists.

---

## Space Complexity

**O(max(n, m))**

---

## Language

C++
# 78. Subsets

## Problem

Given an integer array of unique elements, return all possible subsets (the power set).

---

## Approach

- Use Backtracking.
- At every index, we have two choices:
  - Include the current element.
  - Exclude the current element.
- Continue recursively until all elements are processed.
- Store every generated subset.

---

## Algorithm

1. Start from index 0.
2. Include current element.
3. Recurse for next index.
4. Backtrack by removing it.
5. Exclude current element.
6. Recurse again.
7. Store every subset when index reaches the end.

---

## Time Complexity

O(n × 2^n)

---

## Space Complexity

O(n)

---

## Concepts Used

- Backtracking
- Recursion
- DFS
- Power Set

---

## LeetCode

- Problem Number: 78
- Difficulty: Medium
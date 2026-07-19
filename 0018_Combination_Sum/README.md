# 39. Combination Sum

## Problem

Given an array of distinct integers `candidates` and a target integer `target`, return all unique combinations of candidates where the chosen numbers sum to the target.

Each number may be chosen an unlimited number of times.

---

## Approach

- Use Backtracking (DFS).
- At every index, there are two choices:
  1. Take the current candidate.
  2. Skip the current candidate.
- If a candidate is chosen, stay at the same index because it can be reused.
- If skipped, move to the next index.
- Store the current path when the target becomes 0.

---

## Algorithm

1. If target becomes 0, store the current combination.
2. If target becomes negative or all candidates are processed, return.
3. Choose the current candidate and recurse with the reduced target.
4. Backtrack by removing the last element.
5. Skip the current candidate and recurse for the next index.

---

## Time Complexity

Exponential (Backtracking)

---

## Space Complexity

O(Target)

---

## Concepts Used

- Backtracking
- DFS
- Recursion
- Decision Tree

---

## LeetCode

- Problem Number: 39
- Difficulty: Medium
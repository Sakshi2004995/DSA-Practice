# 0016. Generate Parentheses

## Problem
Given `n` pairs of parentheses, generate all combinations of well-formed parentheses.

**LeetCode:** https://leetcode.com/problems/generate-parentheses/

---

## Approach

- Use **Backtracking (Recursion)**.
- Keep track of:
  - `open` = number of opening brackets used.
  - `close` = number of closing brackets used.
- Add `'('` if `open < n`.
- Add `')'` only if `close < open`.
- When the current string length becomes `2 * n`, store it in the answer.

---

## Time Complexity

O(4^n / √n)

## Space Complexity

O(n)

---

## Concepts Used

- Backtracking
- Recursion
- DFS
- String Manipulation
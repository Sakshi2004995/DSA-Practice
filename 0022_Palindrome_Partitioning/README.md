# 131. Palindrome Partitioning

## Problem

Given a string `s`, partition it such that every substring of the partition is a palindrome.

Return all possible palindrome partitioning of `s`.

---

## Approach

- Use Backtracking.
- At every index, try all possible substrings.
- Check whether the current substring is a palindrome.
- If yes, include it in the current partition.
- Continue recursively for the remaining string.
- Backtrack after exploring all possibilities.

---

## Algorithm

1. Start from index 0.
2. Generate every possible substring.
3. Check if the substring is a palindrome.
4. If palindrome, add it to the current path.
5. Recurse for the remaining string.
6. Backtrack by removing the last substring.
7. Store every valid partition.

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
- String
- Palindrome Checking

---

## LeetCode

- Problem Number: 131
- Difficulty: Medium
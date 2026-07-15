# 28. Find the Index of the First Occurrence in a String

## Problem

Given two strings `haystack` and `needle`, return the index of the first occurrence of `needle` in `haystack`. If `needle` is not part of `haystack`, return `-1`.

---

## Approach

- Traverse the `haystack` string from left to right.
- For each possible starting position, compare the characters of `needle`.
- If all characters match, return the current index.
- If no complete match is found after checking all positions, return `-1`.

---

## Algorithm

1. Get the lengths of `haystack` and `needle`.
2. Iterate from index `0` to `n - m`.
3. Compare each character of `needle` with the corresponding characters in `haystack`.
4. If every character matches, return the current index.
5. If no match exists, return `-1`.

---

## Time Complexity

**O((n - m + 1) × m)**

where:
- `n` = length of `haystack`
- `m` = length of `needle`

---

## Space Complexity

**O(1)**

No extra space is used.

---

## Concepts Used

- Strings
- Brute Force
- String Traversal

---

## LeetCode

**Problem Number:** 28

**Difficulty:** Easy
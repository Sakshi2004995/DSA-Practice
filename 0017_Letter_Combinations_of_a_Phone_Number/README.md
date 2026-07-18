# 17. Letter Combinations of a Phone Number

## Problem
Given a string containing digits from 2 to 9, return all possible letter combinations that the number could represent.

---

## Approach

- Store the phone keypad mapping.
- Use Backtracking (DFS).
- For every digit, try every possible letter.
- Continue recursively until all digits are processed.
- Store every valid combination.

---

## Algorithm

1. If the input string is empty, return an empty vector.
2. Store keypad mappings for digits 2–9.
3. Start recursion from index 0.
4. For each character corresponding to the current digit:
   - Add the character to the current string.
   - Recur for the next digit.
5. When all digits are processed, save the current combination.

---

## Time Complexity

O(4ⁿ × n)

---

## Space Complexity

O(n)

---

## Concepts Used

- Backtracking
- Recursion
- DFS
- String Manipulation

---

## LeetCode

- Problem Number: 17
- Difficulty: Medium
# 36. Valid Sudoku

## Problem

Determine if a 9 × 9 Sudoku board is valid according to the Sudoku rules.

Only the filled cells need to be validated.

---

## Approach

- Use an unordered_set to keep track of:
  - Row occurrences
  - Column occurrences
  - 3 × 3 box occurrences
- Traverse every filled cell.
- If the same digit already exists in the corresponding row, column, or box, return false.
- Otherwise, insert it into the set.
- If all cells are processed successfully, return true.

---

## Algorithm

1. Create an unordered_set.
2. Traverse all 81 cells.
3. Ignore '.' cells.
4. Generate unique keys for:
   - Row
   - Column
   - Box
5. Check for duplicates.
6. Return false if found.
7. Otherwise insert all keys.
8. Return true.

---

## Time Complexity

O(81) ≈ O(1)

---

## Space Complexity

O(81) ≈ O(1)

---

## Concepts Used

- Hashing
- Hash Set
- Matrix Traversal
- Simulation

---

## LeetCode

**Problem Number:** 36

**Difficulty:** Medium
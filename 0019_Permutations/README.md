# 46. Permutations

## Problem

Given an array of distinct integers, return all possible permutations.

---

## Approach

- Use Backtracking with a visited array.
- At each step, choose an unused element.
- Add it to the current permutation.
- Recurse for the remaining elements.
- Backtrack by removing the element and marking it unvisited.

---

## Algorithm

1. Create a visited array.
2. Iterate through every element.
3. Skip already visited elements.
4. Add current element to the path.
5. Mark it visited.
6. Recurse.
7. Backtrack by removing the element and marking it unvisited.

---

## Time Complexity

O(n × n!)

---

## Space Complexity

O(n)

---

## Concepts Used

- Backtracking
- DFS
- Recursion
- Visited Array

---

## LeetCode

- Problem Number: 46
- Difficulty: Medium
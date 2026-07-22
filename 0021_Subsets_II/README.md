# 90. Subsets II

## Problem

Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets.

---

## Approach

- Sort the array first.
- Use Backtracking (DFS).
- Store the current subset at every recursive call.
- Skip duplicate elements using:

```cpp
if (i > index && nums[i] == nums[i - 1])
    continue;
```

This ensures duplicate subsets are not generated.

---

## Algorithm

1. Sort the input array.
2. Add current subset to the answer.
3. Traverse remaining elements.
4. Skip duplicate values.
5. Include current element.
6. Recurse for the next index.
7. Backtrack by removing the last element.

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
- Sorting
- Duplicate Handling

---

## LeetCode

- Problem Number: 90
- Difficulty: Medium
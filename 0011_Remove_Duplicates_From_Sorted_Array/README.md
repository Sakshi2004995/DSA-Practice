# 26. Remove Duplicates from Sorted Array

## Problem
Given a sorted array, remove duplicates in-place and return the number of unique elements.

## Approach
- Use two pointers.
- `i` stores the index of the last unique element.
- Traverse the array with `j`.
- Whenever a new unique element is found, increment `i` and copy the element.

## Time Complexity
O(n)

## Space Complexity
O(1)
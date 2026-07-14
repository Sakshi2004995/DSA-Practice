# 27. Remove Element

## Problem
Remove all occurrences of a given value from the array in-place and return the number of remaining elements.

## Approach
- Use two pointers.
- Pointer `k` stores the next position for a valid element.
- Traverse the array.
- If the current element is not equal to `val`, copy it to index `k` and increment `k`.
- Return `k`.

## Time Complexity
O(n)

## Space Complexity
O(1)
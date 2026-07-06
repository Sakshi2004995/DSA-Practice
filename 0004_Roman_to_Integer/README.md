# 13. Roman to Integer

## Problem
Given a Roman numeral, convert it to an integer.

## Approach
- Store Roman numeral values in an unordered_map.
- Traverse the string from left to right.
- If the current value is smaller than the next value, subtract it.
- Otherwise, add it to the answer.

## Time Complexity
O(n)

## Space Complexity
O(1)
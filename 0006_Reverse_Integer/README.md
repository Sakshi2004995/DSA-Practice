# 7. Reverse Integer

## Problem
Reverse the digits of a signed 32-bit integer. If reversing causes overflow, return 0.

## Approach
- Extract the last digit using `%`.
- Build the reversed number.
- Check for overflow before updating the reversed value.

## Time Complexity
O(log n)

## Space Complexity
O(1)
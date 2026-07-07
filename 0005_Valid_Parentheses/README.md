# 20. Valid Parentheses

## Problem
Given a string containing only (), {}, and [], determine whether it is valid.

## Approach
- Use a stack.
- Push opening brackets.
- For every closing bracket:
  - Check if stack is empty.
  - Check whether the top matches.
  - Pop if matched.
- At the end, stack must be empty.

## Time Complexity
O(n)

## Space Complexity
O(n)
# 29. Divide Two Integers

## Problem

Given two integers `dividend` and `divisor`, divide two integers without using multiplication (`*`), division (`/`), and modulus (`%`) operators.

Return the quotient after dividing `dividend` by `divisor`.

---

## Approach

- Handle the overflow case (`INT_MIN / -1`).
- Convert both numbers to positive `long long` values.
- Use bit shifting (`<<`) to repeatedly double the divisor until the largest possible multiple is found.
- Subtract the largest multiple from the dividend.
- Continue until the dividend becomes smaller than the divisor.
- Apply the correct sign to the final answer.

---

## Algorithm

1. Handle overflow.
2. Convert operands to absolute values.
3. Repeatedly double the divisor using left shift.
4. Subtract the largest possible multiple.
5. Add the corresponding multiple to the answer.
6. Restore the correct sign.
7. Return the quotient.

---

## Time Complexity

**O(log² N)**

---

## Space Complexity

**O(1)**

---

## Concepts Used

- Bit Manipulation
- Bit Shifting
- Binary Search Idea
- Integer Overflow Handling

---

## LeetCode

**Problem Number:** 29

**Difficulty:** Medium
# Valid Parentheses

## Problem
Given a string containing parentheses, brackets, and braces, determine if the brackets are valid and correctly matched.

## LeetCode Link
https://leetcode.com/problems/valid-parentheses/

## Approach
Use a stack to store opening brackets. For every closing bracket, check whether it matches the most recent opening bracket.

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(n)

## Test Case 1
Input:
()

Output:
true

## Test Case 2
Input:
([)]

Output:
false

## LeetCode Result
Accepted - All test cases passed.
# Longest Common Prefix

## Problem
Given an array of strings, find the longest common prefix shared by all the strings.

## LeetCode Link
https://leetcode.com/problems/longest-common-prefix/

## Approach
Start with the first string as the prefix and compare it with each remaining string.
Reduce the prefix until it matches the beginning of the current string.

## Complexity
- Time Complexity: O(n × m)
- Space Complexity: O(m)

## Test Case 1
Input:
3
flower flow flight

Output:
fl

## Test Case 2
Input:
3
dog racecar car

Output:
No common prefix

## LeetCode Result
Accepted - 126/126 test cases passed.
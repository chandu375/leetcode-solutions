# Binary Search

## Problem
Given a sorted array of integers and a target value, find the index of the target. Return -1 if the target is not present.

## LeetCode Link
https://leetcode.com/problems/binary-search/

## Approach
Use two pointers, left and right, to define the search range. Check the middle element and reduce the search range by half depending on whether the target is smaller or larger.

## Complexity
- Time Complexity: O(log n)
- Space Complexity: O(1)

## Test Case 1
Input:
6
-1 0 3 5 9 12
9

Output:
4

## Test Case 2
Input:
1
5
3

Output:
-1

## LeetCode Result
Accepted - 47/47 test cases passed.
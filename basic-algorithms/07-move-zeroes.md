# Move Zeroes

## Problem
Given an integer array, move all zeroes to the end while maintaining the relative order of the non-zero elements.

## LeetCode Link
https://leetcode.com/problems/move-zeroes/

## Approach
Use two pointers to place all non-zero elements at the beginning of the array. Whenever a non-zero element is found, swap it with the element at the current position of the second pointer.

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

## Test Case 1
Input:
5
0 1 0 3 12

Output:
1 3 12 0 0

## Test Case 2
Input:
3
0 0 1

Output:
1 0 0

## LeetCode Result
Accepted - 75/75 test cases passed.
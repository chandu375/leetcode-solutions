# Valid Anagram

## Problem
Given two strings, determine whether one string is an anagram of the other.

## LeetCode Link
https://leetcode.com/problems/valid-anagram/

## Approach
First check whether both strings have the same length. Then sort both strings and compare them. If the sorted strings are equal, they are anagrams.

## Complexity
- Time Complexity: O(n log n)
- Space Complexity: O(1)

## Test Case 1
Input:
anagram nagaram

Output:
true

## Test Case 2
Input:
a b

Output:
false

## LeetCode Result
Accepted - 55/55 test cases passed.
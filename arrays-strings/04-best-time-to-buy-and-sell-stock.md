# Best Time to Buy and Sell Stock

## Problem
Given an array of stock prices, find the maximum profit that can be achieved by buying on one day and selling on a later day.

## LeetCode Link
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach
Keep track of the minimum price seen so far and calculate the profit for each later price. Update the maximum profit whenever a higher profit is found.

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

## Test Case 1
Input:
6
7 1 5 3 6 4

Output:
5

## Test Case 2
Input:
5
7 6 4 3 1

Output:
0

## LeetCode Result
Accepted - 213/213 test cases passed.
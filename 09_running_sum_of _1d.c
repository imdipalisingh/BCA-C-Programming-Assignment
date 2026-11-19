/*
Problem Name:Running Sum of 1d Array
LeetCode Problem Number:09
Topic:ARRAY

Problem Statement:Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.
*/

int* runningSum(int* nums, int numsSize, int* returnSize)
{
    int i;

    for (i = 1; i < numsSize; i++)
    {
        nums[i] = nums[i] + nums[i - 1];
    }

    *returnSize = numsSize;
    return nums;
}
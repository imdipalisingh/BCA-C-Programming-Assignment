/*
Problem Name:Find Pivot Index
LeetCode Problem Number:08
Topic:ARRAY

Problem Statement:Given an array of integers nums, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.
*/

int pivotIndex(int* nums, int numsSize)
{
    int totalSum = 0;
    int leftSum = 0;
    int i;

    /* Find the sum of all numbers */
    for (i = 0; i < numsSize; i++)
    {
        totalSum = totalSum + nums[i];
    }

    /* Check each position from left to right */
    for (i = 0; i < numsSize; i++)
    {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum)
        {
            return i;
        }

        leftSum = leftSum + nums[i];
    }

    return -1;
}
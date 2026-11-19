/*
Problem Name:Palindrome Number
LeetCode Problem Number:1
Topic:ALGORITHMS

Problem Statement:Given an integer x, return true if x is a palindrome, and false otherwise.
*/

#include <stdbool.h>

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }

    int original = x;
    long reversed = 0;

    while (x > 0)
    {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    if (original == reversed)
    {
        return true;
    }
    else
    {
        return false;
    }
}



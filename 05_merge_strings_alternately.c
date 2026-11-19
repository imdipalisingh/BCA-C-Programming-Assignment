/*
Problem Name:Merge Strings Alternately
LeetCode Problem Number:05
Topic:STRINGS

Problem Statement:You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/

#include <stdlib.h>
#include <string.h>

char* mergeAlternately(char* word1, char* word2)
{
    int length1 = strlen(word1);
    int length2 = strlen(word2);

    /* The merged string needs room for both words and '\0'. */
    char* merged = malloc(length1 + length2 + 1);

    int i = 0;
    int position = 0;

    /* Add one character from each word while both have characters. */
    while (i < length1 && i < length2)
    {
        merged[position] = word1[i];
        position++;

        merged[position] = word2[i];
        position++;

        i++;
    }

    /* Add any remaining characters from word1. */
    while (i < length1)
    {
        merged[position] = word1[i];
        position++;
        i++;
    }

    /* Add any remaining characters from word2. */
    while (i < length2)
    {
        merged[position] = word2[i];
        position++;
        i++;
    }

    merged[position] = '\0';

    return merged;
}
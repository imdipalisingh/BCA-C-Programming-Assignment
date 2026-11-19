/*
Problem Name:Length of Last Word
LeetCode Problem Number:07
Topic:STRINGS

Problem Statement:Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.
*/

int lengthOfLastWord(char* s)
{
    int i = 0;
    int lastWordLength = 0;
    int currentWordLength = 0;

    while (s[i] != '\0')
    {
        if (s[i] != ' ')
        {
            currentWordLength++;
        }
        else
        {
            if (currentWordLength > 0)
            {
                lastWordLength = currentWordLength;
                currentWordLength = 0;
            }
        }

        i++;
    }

    /* The string might end while we are still counting the last word */
    if (currentWordLength > 0)
    {
        lastWordLength = currentWordLength;
    }

    return lastWordLength;
}
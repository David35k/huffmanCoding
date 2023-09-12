#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void checkFreq(char[]);

int frequencies[100];
char uniqueLetters[100];

int main()
{

    char string[100];

    printf("input string:");
    fgets(string, 100, stdin);

    string[strlen(string) - 1] = '\0';

    printf("%s\n", string);

    checkFreq(string);

    return 0;
}

void checkFreq(char string[])
{
    char letters[100];
    int freqs[100];

    for (int i = 0; i < 100; i++)
    {
        letters[i] = '~'; // literally no one uses this character if you use it you are weird
        freqs[i] = 0;
    }

    // make the array of unique characters
    for (int i = 0; i < strlen(string); i++)
    {
        bool flag = false;
        // loop through all characters it has already gone over,
        // if the new character has not been seen before it wouldn't set flag to true
        for (int j = 0; j < i; j++)
        {
            if (string[i] == string[j])
            {
                flag = true;
            }
        }

        // if not flagged it means that the character at i is unique
        if (!flag)
        {
            // add the unique letter to the array of letters
            letters[i] = string[i];
        }
    }

    // check for the frequency of each letter
    for (int i = 0; i < strlen(string); i++)
    {
        // increase the counts if the two letters are the same
        for (int j = 0; j < strlen(string); j++)
        {
            if (string[i] == letters[j])
            {
                freqs[j] += 1;
            }
        }
    }

    // assign the frequencies to the global variable
    for (int i = 0; i < 100; i++)
    {
        int count = 0;
        if (letters[i] != '~' && freqs[i] != 0)
        {
            frequencies[i - count] = freqs[i];
            uniqueLetters[i - count] = letters[i];
        }
        else
        {
            count++;
        }
    }

    // for debugging
    for (int i = 0; i < 100; i++)
    {
        // printf("%d\n", freqs[i]);
        // if (letters[i] != '~' && freqs[i] != 0)
        // {
        printf("\nletter: %c, fredquency: %d", uniqueLetters[i], frequencies[i]);
        // }
    }
}
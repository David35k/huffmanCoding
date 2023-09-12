#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void checkFreq(char[]);

int main()
{

    char string[100];

    printf("input string:");
    fgets(string, 100, stdin);

    printf("%s", string);

    checkFreq(string);

    return 0;
}

void checkFreq(char string[])
{
    char letters[100];
    int freq[100];

    for (int i = 0; i < 100; i++)
    {
        letters[i] = '\0';
        freq[i] = 0;
    }

    // make the array of unique characters
    for (int i = 0; i < strlen(string); i++)
    {
        bool flag = false;
        for(int j = 0;j<i;j++){
            if(string[i] == string[j]) {
                flag = true;
            }
        }

        if(!flag) {
            letters[i] = string[i];
        }
    }

    for(int i = 0; i < 100; i++) {
        printf("%c ", letters[i]);
    }

    // for (int i = 0; i < strlen(string); i++)
    // {
    //     // increase the counts
    //     for (int j = 0; j < strlen(letters); j++)
    //     {
    //         if (string[i] == letters[j])
    //         {
    //             freq[j] += 1;
    //         }
    //     }
    // }
}

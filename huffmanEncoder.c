// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void checkFreq(char[]);

int main() {
    
    char string[100];
    
    printf("input string:");
    fgets(string, 100, stdin);
    
    printf("%s", string);

    return 0;
}

void checkFreq(char string[]) {
    char letters[100];
    int freq[100];
    
    for(int i = 0;i < 100; i++) {
        letters[i] = '\0';
        freq[i] = 0;
    }
    
    
    for(int i = 0;i < strlen(string); i++) {
        // make the array of unique characters
        // if(string[])
        
        // increase the counts
        for(int j = 0;j < strlen(letters); j++){
            if(string[i] == letters[j]) {
                freq[j] += 1;
            }
        }
    }
}


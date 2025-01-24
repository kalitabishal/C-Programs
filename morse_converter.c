#include <stdio.h>
#include <string.h>

// Morse code for uppercase letters 
const char* morseUpper[26] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
    "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
    "..-", "...-", ".--", "-..-", "-.--", "--.."
};

// Morse code for lowercase letters 
const char* morseLower[26] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
    "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
    "..-", "...-", ".--", "-..-", "-.--", "--.."
};

// string to Morse code
void convertToMorse(const char* input) {
    printf("Morse Code: ");
    for (int i = 0; input[i] != '\n'; i++) {
        char c = input[i];
      //  printf("%c",input[i]);
        if (c >= 'A' && c <= 'Z') {
            // Uppercase letter
            printf("%s ", morseUpper[c - 'A']);
        } else if (c >= 'a' && c <= 'z') {
            // Lowercase letter
            printf("%s ", morseLower[c - 'a']);
        } else if (c == ' ') {
            // Space between words
            printf("/ ");
        }
        else{
                printf("?");
            }

    }
    printf("\n");
}

int main() {
    char input[200];
    
    printf("Enter a string to convert to Morse code: ");
    fgets(input, sizeof(input)-1, stdin);
    
    convertToMorse(input);
    
    return 0;
}
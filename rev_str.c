#include<stdio.h>
#include<string.h>

// function to calcualte length of the string and then swap the characters
void rev_str(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1; 

    while (start < end )
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++; //walk to the next character
        end--; //walk from the end to the next character while swapping 
    } 
}

int main(){
    char str[30];
    printf("Please enter a string:\n");
    scanf("%29s", str);

    rev_str(str);
    printf("Here is the reversed string : %s\n", str);

    return 0;
}
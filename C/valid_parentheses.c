/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <malloc.h>
#include "custom_strings.h"

bool isValid(char *s);
void print(char *s);

int main(int argc, char *argv[]) {
    char input[5] = "(())";
    /*
    input = (char *)malloc(sizeof(char) * 20);
    
    print("Enter a set of parentheses: ");
    fgets(input, 20, stdin);
    print(input);
    */

    if(isValid(input)) print("Properly closed!\n");
    else print("Not properly closed!\n");

    return 0;
}

bool isValid(char *s){
    int i = 0, idx = 0;
    char c;
    while (*(s + i) != '\0') {
        printf("%c", *(s+i));
        i++;
    }
    print("Tu smo\n");
    printf("i je %d\n", i);
    if(i % 2 == 1) return false;

    print("Tu smo\n");

    char *stack = (char *)malloc(sizeof(char) * i);

    for(int j = 0; j < i; j++) {
        c = *(s+j);
        switch (c)
        {
            case '(':
            case '[':
            case '{':
                stack[idx++] = c; 
                break;

            case ')': if (*stack == '\0' || *(stack + j) !='(') return false; else stack--; idx--; break;
            case ']': if (*stack == '\0' || *(stack + j) !='[') return false; else stack--; idx--; break;
            case '}': if (*stack == '\0' || *(stack + j) !='{') return false; else stack--; idx--; break;

            default: ;
        }
    }


    free(stack);
    return idx == 0;

}
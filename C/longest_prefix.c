/*

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

*/
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(int argc, char *argv[]) {
    int num;
    char **strings, string[200];
    
    printf("How many string would you like to enter: ");
    scanf("%d", &num);

    **strings = (char *) malloc(sizeof(char) * num);

    for(int i = 0; i < num; i++) {
        printf("Type in a string: ");
        scanf("%s", string);
        
        strcpy(*strings[i], string);
    }
/*
    for(int i = 0; i < num; i++) {
        printf("%s ", *strings[i]);
    }
*/
    return 0;
}

/*char *longestCommonPrefix(char **strs, int strsSize){

}*/
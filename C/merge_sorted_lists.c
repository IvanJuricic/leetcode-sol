/*

Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

*/

#include "lists.h"

int main(int argc, char *argv[]) {
    int size;
    printf("\n\tLinked lists\n");

    printf("Enter the size of array: ");
    scanf("%d", &size);

    createList(size);
    createList(size);


    return 0;
}
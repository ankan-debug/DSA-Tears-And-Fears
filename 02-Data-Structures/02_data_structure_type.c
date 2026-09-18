/*
 * Program No.: 2
 * Program Name: Finding type of data structure
 * Date: 03.08.26
 * Aim: Find the type of data structure using a switch-case menu.
 * Approach: Select Array, Linked List, Tree, or Graph. The selected
 * structure is classified as static/dynamic and linear/non-linear.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 02-Data-Structures/02_data_structure_type.c -lm -o build/02-Data-Structures/02_data_structure_type
 * Run: ./build/02-Data-Structures/02_data_structure_type
 */
#include <stdio.h>

int main(void)
{
    int choice;

    printf("1. Array\n");
    printf("2. Linked List\n");
    printf("3. Tree\n");
    printf("4. Graph\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    switch (choice) {
    case 1:
        printf("Array -> Static -> Linear -> Non-primitive\n");
        break;
    case 2:
        printf("Linked List -> Dynamic -> Linear -> Non-primitive\n");
        break;
    case 3:
        printf("Tree -> Dynamic -> Non-linear -> Non-primitive\n");
        break;
    case 4:
        printf("Graph -> Dynamic -> Non-linear -> Non-primitive\n");
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}

/*
 * Sample run:
 * 1. Array
 * 2. Linked List
 * 3. Tree
 * 4. Graph
 * Enter your choice: 3
 * Tree -> Dynamic -> Non-linear -> Non-primitive
 */

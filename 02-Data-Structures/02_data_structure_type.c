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
int main () {
    int n;
    printf("1. Array\n 2. Linked List\n 3. Tree\n 4. Graph\n ");
    printf("Enter your choice: ");
    scanf("%d", &n);
    switch(n) {
        case 1:
            printf("Static -> Linear -> Non-primitive\n");
            break;
        case 2:
            printf("Dynamic -> Linear -> Non-primitive\n");
            break;
        case 3:
            printf("Dynamic -> Non-linear -> Non-primitive\n");
            break;
        case 4:
            printf("Dynamic -> Non-linear -> Non-primitive\n");
            break;
        default:
            printf("Invalid Choice\n");
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

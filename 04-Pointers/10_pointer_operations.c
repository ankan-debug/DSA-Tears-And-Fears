/*
 * Program No.: 10
 * Program Name: Playing with pointers
 * Date: 17.08.26
 * Aim: Demonstrate basic pointer and pointer-to-pointer operations.
 * Approach: Use a pointer to access and modify an integer, then use a
 * pointer-to-pointer to reach the same target through two indirections.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 04-Pointers/10_pointer_operations.c -lm -o build/04-Pointers/10_pointer_operations
 * Run: ./build/04-Pointers/10_pointer_operations
 */
#include <stdio.h>

int main(void)
{
    int number = 50;
    int value = 10;
    int *pointer = &number;
    int **pointer_to_pointer = &pointer;

    printf("%d %d\n", number, value);

    pointer = &value;
    *pointer = 25;
    printf("%d %d\n", number, *pointer);

    **pointer_to_pointer = 50;
    printf("%d %d %d\n", number, value, **pointer_to_pointer);

    return 0;
}

/*
 * Sample run:
 * 50 10
 * 50 25
 * 50 50 50
 */

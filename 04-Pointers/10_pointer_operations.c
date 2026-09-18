/*
 * Program No.: 10
 * Program Name: Playing with pointers
 * Date: 17.08.26
 * Aim: Demonstrate basic pointer and pointer-to-pointer operations.
 * Approach: Use a pointer to access and modify an integer, then use a
 * pointer-to-pointer to modify the same object through two levels.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 04-Pointers/10_pointer_operations.c -o program
 * Run: ./program
 */
#include <stdio.h>

int main(void)
{
    int n = 50;
    int value = 10;
    int *pointer = &n;
    int **pointer_to_pointer = &pointer;

    printf("%d %d\n", n, value);
    printf("%d\n", *pointer);

    *pointer = 25;
    printf("%d %d\n", n, *pointer);

    **pointer_to_pointer = 50;
    printf("%d %d %d\n", n, *pointer, **pointer_to_pointer);

    return 0;
}

/*
 * Sample run:
 * 50 10
 * 50
 * 25 25
 * 50 50 50
 */
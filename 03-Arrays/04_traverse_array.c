/*
 * Program No.: 4
 * Program Name: Traverse an array
 * Date: 03.08.26
 * Aim: Traverse an array and print every element.
 * Approach: Traverse an array and print every element. Approach: Read the number of elements and then visit the array from index zero through the last valid index.
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 03-Arrays/04_traverse_array.c -lm -o build/03-Arrays/04_traverse_array
 * Run: ./build/03-Arrays/04_traverse_array
 */
#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int numbers[MAX_SIZE];
    size_t count;

    printf("Enter number of elements: ");
    if (scanf("%zu", &count) != 1 || count > MAX_SIZE) {
        fprintf(stderr, "Invalid array size.\n");
        return 1;
    }

    printf("Enter %zu elements: ", count);
    for (size_t index = 0U; index < count; ++index) {
        if (scanf("%d", &numbers[index]) != 1) {
            fprintf(stderr, "Invalid element.\n");
            return 1;
        }
    }

    printf("Array elements:\n");
    for (size_t index = 0U; index < count; ++index) {
        printf("Index %zu -> %d\n", index, numbers[index]);
    }

    return 0;
}

/*
 * Sample run:
 * Enter number of elements: Enter 5 elements: Array elements:
 * Index 0 -> 5
 * Index 1 -> 10
 * Index 2 -> 15
 * Index 3 -> 20
 * Index 4 -> 25
 */

/*
 * Program No.: 6
 * Program Name: Deletion in an array
 * Date: 10.08.26
 * Aim: Delete an element from a specified position in an array.
 * Approach: Delete an element from a specified position in an array. Approach: Shift all following elements one position left and reduce the logical array size by one.
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 03-Arrays/06_array_deletion.c -lm -o build/03-Arrays/06_array_deletion
 * Run: ./build/03-Arrays/06_array_deletion
 */
#include <stdio.h>

#define MAX_SIZE 100

static void print_array(const int array[], size_t size)
{
    for (size_t index = 0U; index < size; ++index) {
        printf("%d%s", array[index], index + 1U == size ? "\n" : " ");
    }
}

int main(void)
{
    int array[MAX_SIZE];
    size_t size;
    size_t position;

    printf("Enter number of elements: ");
    if (scanf("%zu", &size) != 1 || size > MAX_SIZE) {
        fprintf(stderr, "Invalid size.\n");
        return 1;
    }

    printf("Enter %zu elements: ", size);
    for (size_t index = 0U; index < size; ++index) {
        if (scanf("%d", &array[index]) != 1) {
            fprintf(stderr, "Invalid element.\n");
            return 1;
        }
    }

    if (size == 0U) {
        fprintf(stderr, "Cannot delete from an empty array.\n");
        return 1;
    }

    printf("Enter position to delete (0 to %zu): ", size - 1U);
    if (scanf("%zu", &position) != 1 || position >= size) {
        fprintf(stderr, "Invalid position.\n");
        return 1;
    }

    for (size_t index = position; index + 1U < size; ++index) {
        array[index] = array[index + 1U];
    }
    --size;

    printf("Array after deletion: ");
    print_array(array, size);
    return 0;
}

/*
 * Sample run:
 * Enter number of elements: Enter 5 elements: Enter position to delete (0 to 4): Array after deletion: 10 20 40 50
 */

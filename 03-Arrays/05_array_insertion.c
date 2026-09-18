/*
 * Program No.: 5
 * Program Name: Insertion in an array
 * Date: 10.08.26
 * Aim: Insert an element at a specified position in an array.
 * Approach: Insert an element at a specified position in an array. Approach: Shift elements one position to the right from the end toward the insertion point, then place the new value at that position.
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 03-Arrays/05_array_insertion.c -lm -o build/03-Arrays/05_array_insertion
 * Run: ./build/03-Arrays/05_array_insertion
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
    int element;

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

    printf("Enter element to insert: ");
    if (scanf("%d", &element) != 1) {
        fprintf(stderr, "Invalid element.\n");
        return 1;
    }

    printf("Enter position (0 to %zu): ", size);
    if (scanf("%zu", &position) != 1 || position > size) {
        fprintf(stderr, "Invalid position.\n");
        return 1;
    }

    if (size == MAX_SIZE) {
        fprintf(stderr, "Array overflow: no space for insertion.\n");
        return 1;
    }

    for (size_t index = size; index > position; --index) {
        array[index] = array[index - 1U];
    }
    array[position] = element;
    ++size;

    printf("Array after insertion: ");
    print_array(array, size);
    return 0;
}

/*
 * Sample run:
 * Enter number of elements: Enter 4 elements: Enter element to insert: Enter position (0 to 4): Array after insertion: 10 20 30 40 50
 */

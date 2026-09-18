/*
 * Program No.: 3
 * Program Name: Access and print array elements
 * Date: 03.08.26
 * Aim: Access and print array elements by index.
 * Approach: Access and print array elements by index. Approach: Store five integer values in an array and visit each valid index. The implementation uses normal zero-based C array indexing.
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 03-Arrays/03_access_array_element.c -lm -o build/03-Arrays/03_access_array_element
 * Run: ./build/03-Arrays/03_access_array_element
 */
#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    size_t count = sizeof(numbers) / sizeof(numbers[0]);

    for (size_t index = 0U; index < count; ++index) {
        printf("Element at index %zu is: %d\n", index, numbers[index]);
    }

    return 0;
}

/*
 * Sample run:
 * Element at index 0 is: 10
 * Element at index 1 is: 20
 * Element at index 2 is: 30
 * Element at index 3 is: 40
 * Element at index 4 is: 50
 */

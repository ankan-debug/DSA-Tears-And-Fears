/*
 * Program No.: 14
 * Program Name: Calculate 2D array element memory address using row-major order
 * Date: 17.08.26
 * Aim: Calculate a two-dimensional array element address in row-major order.
 * Approach: Apply B + ((i-LR)*N + (j-LC))*w using the base address, bounds,
 * number of columns, and element width.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 06-Memory-Addressing/14_2d_array_address_row_major.c -o program
 * Run: ./program
 */
#include <stdio.h>

int main(void)
{
    unsigned long long base_address;
    unsigned long long element_size;
    unsigned long long columns;
    long long row;
    long long column;
    long long lower_row;
    long long lower_column;

    printf("Enter the Base Address (B): ");
    if (scanf("%llu", &base_address) != 1) {
        fprintf(stderr, "Invalid base address.\n");
        return 1;
    }
    printf("Enter the size of the data type in bytes (w): ");
    if (scanf("%llu", &element_size) != 1 || element_size == 0ULL) {
        fprintf(stderr, "Invalid element size.\n");
        return 1;
    }
    printf("Enter the target row: ");
    if (scanf("%lld", &row) != 1) return 1;
    printf("Enter the target column: ");
    if (scanf("%lld", &column) != 1) return 1;
    printf("Enter the lower row bound (LR): ");
    if (scanf("%lld", &lower_row) != 1) return 1;
    printf("Enter the lower column bound (LC): ");
    if (scanf("%lld", &lower_column) != 1) return 1;
    printf("Enter total number of columns (N): ");
    if (scanf("%llu", &columns) != 1 || columns == 0ULL) {
        fprintf(stderr, "Invalid column count.\n");
        return 1;
    }

    unsigned long long address =
        base_address +
        ((unsigned long long)(row - lower_row) * columns +
         (unsigned long long)(column - lower_column)) * element_size;

    printf("The calculated address for A[%lld][%lld] is: %llu\n",
           row, column, address);
    return 0;
}

/*
 * Sample run:
 * Enter the Base Address (B): 2000
 * Enter the size of the data type in bytes (w): 4
 * Enter the target row: 3
 * Enter the target column: 3
 * Enter the lower row bound (LR): 0
 * Enter the lower column bound (LC): 0
 * Enter total number of columns (N): 5
 * The calculated address for A[3][3] is: 2072
 */
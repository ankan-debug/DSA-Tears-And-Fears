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

int main() {
    int B, W, I, J, LR, LC, N;

    printf("Enter the Base Address (B): ");
    scanf("%d", &B);

    printf("Enter the size of the data type in bytes (W): ");
    scanf("%d", &W);

    printf("Enter the target row to be found (I): ");
    scanf("%d", &I);

    printf("Enter the target column to be found (J): ");
    scanf("%d", &J);

    printf("Enter the lowest index of Row/Lower Bound (LR): ");
    scanf("%d", &LR);

    printf("Enter the lowest index of Column/Lower Bound (LC): ");
    scanf("%d", &LC);

    printf("Enter the total Number of columns (N): ");
    scanf("%d", &N);

    int address = B + W * ((I - LR) * N + (J - LC));

    printf("\nThe calculated address for element A[%d][%d] is: %d\n", I, J, address);

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

/*
 * Program No.: 13
 * Program Name: Calculate 1D array element memory address
 * Date: 17.08.26
 * Aim: Calculate the memory address of a one-dimensional array element.
 * Approach: Apply B + (i - LB) * w using the supplied base address, index,
 * lower bound, and element width.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 13_1d_array_address.c -o program
 * Run: ./program
 */
#include <stdio.h>

int main() {
    int B, index, size_dt;
    printf("Enter Base Address (B): ");
    scanf("%d", &B);
    printf("Enter index: ");
    scanf("%d", &index);
    printf("Enter the size of data type in bytes (size_dt): ");
    scanf("%d", &size_dt);
    
    int address = B + (index * size_dt);
    printf("The calculated address of the element is : %d\n", address);
    
    return 0;
}
/*
 * Sample run:
 * Enter Base Address (B): 1000
 * Enter index: 4
 * Enter the size of data type in bytes (w): 4
 * Enter lower bound (LB): 0
 * The calculated address of the element is: 1016
 */

/*
 * Program No.: 1
 * Program Name: Finding factorial using recursion
 * Date: 03.08.26
 * Aim: Find the factorial of a number using recursion.
 * Approach: Find the factorial of a number using recursion. Approach: Read a non-negative integer and recursively multiply it by the factorial of its predecessor. The base cases are 0 and 1.
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 01-Recursion/01_factorial_recursion.c -lm -o build/01-Recursion/01_factorial_recursion
 * Run: ./build/01-Recursion/01_factorial_recursion
 */
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else
        return (n * factorial(n - 1));
}

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Factorial of %d is %d", number, factorial(number));

    return 0;
}

/*
 * Sample run:
 * Enter the number: Factorial of 5 is 120
 */

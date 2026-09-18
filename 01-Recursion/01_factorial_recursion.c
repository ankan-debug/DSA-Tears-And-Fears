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
#include <limits.h>

static int factorial(unsigned int n, unsigned long long *result)
{
    if (n == 0U || n == 1U) {
        *result = 1ULL;
        return 1;
    }

    unsigned long long previous;
    if (!factorial(n - 1U, &previous) || previous > ULLONG_MAX / n) {
        return 0;
    }
    *result = previous * n;
    return 1;
}

int main(void)
{
    unsigned int number;
    unsigned long long result;

    printf("Enter the number: ");
    if (scanf("%u", &number) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (!factorial(number, &result)) {
        fprintf(stderr, "Factorial is too large for unsigned long long.\n");
        return 1;
    }

    printf("Factorial of %u is %llu\n", number, result);
    return 0;
}

/*
 * Sample run:
 * Enter the number: Factorial of 5 is 120
 */

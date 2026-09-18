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
int main(void){unsigned long long b,w;long long i,lb;printf("Enter Base Address (B): ");if(scanf("%llu",&b)!=1)return 1;printf("Enter index: ");if(scanf("%lld",&i)!=1)return 1;printf("Enter the size of data type in bytes (w): ");if(scanf("%llu",&w)!=1||w==0)return 1;printf("Enter lower bound (LB): ");if(scanf("%lld",&lb)!=1)return 1;printf("The calculated address of the element is: %llu\n",b+(unsigned long long)(i-lb)*w);return 0;}
/*
 * Sample run:
 * Enter Base Address (B): 1000
 * Enter index: 4
 * Enter the size of data type in bytes (w): 4
 * Enter lower bound (LB): 0
 * The calculated address of the element is: 1016
 */
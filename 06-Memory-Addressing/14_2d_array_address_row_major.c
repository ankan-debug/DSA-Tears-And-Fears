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
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 14_2d_array_address_row_major.c -o program
 * Run: ./program
 */
#include <stdio.h>
int main(void){unsigned long long b,w,n;long long i,j,lr,lc;printf("Enter the Base Address (B): ");if(scanf("%llu",&b)!=1)return 1;printf("Enter the size of the data type in bytes (w): ");if(scanf("%llu",&w)!=1||w==0)return 1;printf("Enter the target row: ");if(scanf("%lld",&i)!=1)return 1;printf("Enter the target column: ");if(scanf("%lld",&j)!=1)return 1;printf("Enter the lower row bound (LR): ");if(scanf("%lld",&lr)!=1)return 1;printf("Enter the lower column bound (LC): ");if(scanf("%lld",&lc)!=1)return 1;printf("Enter total number of columns (N): ");if(scanf("%llu",&n)!=1||n==0)return 1;printf("The calculated address for A[%lld][%lld] is: %llu\n",i,j,b+((unsigned long long)(i-lr)*n+(unsigned long long)(j-lc))*w);return 0;}
/*
 * Sample run:
 * Enter the Base Address (B): 2000
 * Enter the size of the data type in bytes (w): 4
 * Enter the target row: 3
 * Enter the target column: 3
 * Enter the lower row bound (LR): 0
 * Enter the lower column bound (LC): 0
 * Enter total number of columns (N): 5
 * The calculated address for A[3][3] is: 2068
 */
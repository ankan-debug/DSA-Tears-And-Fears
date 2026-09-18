/*
 * Program No.: 7
 * Program Name: Linear search
 * Date: 10.08.26
 * Aim: Perform linear search on an array.
 * Approach: Compare the target with elements from left to right until a match
 * is found or the array ends.
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 07_linear_search.c -o program
 * Run: ./program
 */
#include <stdio.h>
#define MAX_SIZE 100
int main(void){int a[MAX_SIZE],target;size_t n;printf("Enter number of elements: ");if(scanf("%zu",&n)!=1||n>MAX_SIZE)return 1;printf("Enter %zu elements: ",n);for(size_t i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;printf("Enter element to search: ");if(scanf("%d",&target)!=1)return 1;for(size_t i=0;i<n;i++)if(a[i]==target){printf("Element found at position: %zu\n",i);return 0;}printf("Element not found\n");return 0;}
/*
 * Sample run:
 * Enter number of elements: 5
 * Enter 5 elements: 10 20 30 40 50
 * Enter element to search: 30
 * Element found at position: 2
 */
/*
 * Program No.: 18
 * Program Name: Modified bubble sort
 * Date: 24.08.26
 * Aim: Perform the modified bubble sort recorded in the lab.
 * Approach: Track whether a pass performed a swap and stop immediately when
 * the array is already sorted.
 * Time Complexity: O(n^2) worst-case; O(n) best-case
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 18_modified_bubble_sort.c -o program
 * Run: ./program
 */
#include <stdio.h>
#define MAX_SIZE 100
int main(void){int a[MAX_SIZE];size_t n;printf("Enter number of elements: ");if(scanf("%zu",&n)!=1||n>MAX_SIZE)return 1;printf("Enter %zu elements: ",n);for(size_t i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;for(size_t p=0;p<n;p++){int swapped=0;for(size_t i=0;i+1<n-p;i++)if(a[i]>a[i+1]){int t=a[i];a[i]=a[i+1];a[i+1]=t;swapped=1;}if(!swapped)break;}printf("Sorted Array\n");for(size_t i=0;i<n;i++)printf("%d%s",a[i],i+1==n?"\n":" ");return 0;}
/*
 * Sample run:
 * Enter number of elements: 7
 * Enter 7 elements: 6 4 7 8 1 9 5
 * Sorted Array
 * 1 4 5 6 7 8 9
 */
/*
 * Program No.: 16
 * Program Name: Selection sort
 * Date: 24.08.26
 * Aim: Sort an array using selection sort.
 * Approach: Find the minimum in the unsorted suffix and place it at the
 * current output position.
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 16_selection_sort.c -o program
 * Run: ./program
 */
#include <stdio.h>
#define MAX_SIZE 100
int main(void){int a[MAX_SIZE];size_t n;printf("Enter number of elements: ");if(scanf("%zu",&n)!=1||n>MAX_SIZE)return 1;printf("Enter %zu elements: ",n);for(size_t i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;for(size_t i=0;i<n;i++){size_t m=i;for(size_t j=i+1;j<n;j++)if(a[j]<a[m])m=j;if(m!=i){int t=a[i];a[i]=a[m];a[m]=t;}}printf("Sorted Array\n");for(size_t i=0;i<n;i++)printf("%d%s",a[i],i+1==n?"\n":" ");return 0;}
/*
 * Sample run:
 * Enter number of elements: 7
 * Enter 7 elements: 6 4 7 8 1 9 5
 * Sorted Array
 * 1 4 5 6 7 8 9
 */
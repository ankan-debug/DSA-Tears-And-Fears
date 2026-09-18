/*
 * Program No.: 17
 * Program Name: Insertion sort
 * Date: 24.08.26
 * Aim: Sort an array using insertion sort.
 * Approach: Treat the left side as sorted and insert each next key into its
 * proper position by shifting larger values right.
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 17_insertion_sort.c -o program
 * Run: ./program
 */
#include <stdio.h>
#define MAX_SIZE 100
int main(void){int a[MAX_SIZE];size_t n;printf("Enter number of elements: ");if(scanf("%zu",&n)!=1||n>MAX_SIZE)return 1;printf("Enter %zu elements: ",n);for(size_t i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;for(size_t i=1;i<n;i++){int key=a[i];size_t j=i;while(j>0&&a[j-1]>key){a[j]=a[j-1];--j;}a[j]=key;}printf("Sorted Array\n");for(size_t i=0;i<n;i++)printf("%d%s",a[i],i+1==n?"\n":" ");return 0;}
/*
 * Sample run:
 * Enter number of elements: 7
 * Enter 7 elements: 6 4 7 8 1 9 5
 * Sorted Array
 * 1 4 5 6 7 8 9
 */
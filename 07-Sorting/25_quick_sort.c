/*
 * Program No.: 25
 * Program Name: Quick sort
 * Date: 07.09.26
 * Aim: Sort an integer array using the final quick-sort implementation in the record.
 * Approach: Partition each range around a pivot and recursively sort the left
 * and right partitions.
 * Time Complexity: O(n log n) average; O(n^2) worst-case
 * Space Complexity: O(log n) average recursion
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 25_quick_sort.c -o program
 * Run: ./program
 */
#include <stdio.h>
static void swap(int*a,int*b){int t=*a;*a=*b;*b=t;}
static int partition(int a[],int l,int r){int pivot=a[r],i=l-1;for(int j=l;j<r;j++)if(a[j]<=pivot){i++;swap(&a[i],&a[j]);}swap(&a[i+1],&a[r]);return i+1;}
static void quick_sort(int a[],int l,int r){if(l<r){int p=partition(a,l,r);quick_sort(a,l,p-1);quick_sort(a,p+1,r);}}
int main(void){int a[]={38,27,43,3,9,82,10};size_t n=sizeof(a)/sizeof(a[0]);printf("Original array: ");for(size_t i=0;i<n;i++)printf("%d%s",a[i],i+1==n?"\n":" ");quick_sort(a,0,(int)n-1);printf("Sorted array: ");for(size_t i=0;i<n;i++)printf("%d%s",a[i],i+1==n?"\n":" ");return 0;}
/*
 * Sample run:
 * Original array: 38 27 43 3 9 82 10
 * Sorted array: 3 9 10 27 38 43 82
 */
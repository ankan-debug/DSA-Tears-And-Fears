/*
 * Program No.: 21
 * Program Name: Quick sort
 * Date: 31.08.26
 * Aim: Sort an array using quick sort.
 * Approach: Partition around the last element as pivot and recursively sort
 * the two resulting partitions.
 * Time Complexity: O(n log n) average; O(n^2) worst-case
 * Space Complexity: O(log n) average recursion
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 21_quick_sort.c -o program
 * Run: ./program
 */
#include <stdio.h>
#define MAX_SIZE 100
static void q(int a[],int l,int r){if(l>=r)return;int p=a[r],s=l;for(int i=l;i<r;i++)if(a[i]<=p){int t=a[s];a[s]=a[i];a[i]=t;s++;}int t=a[s];a[s]=a[r];a[r]=t;q(a,l,s-1);q(a,s+1,r);}
int main(void){int a[MAX_SIZE];size_t n;printf("Enter number of elements: ");if(scanf("%zu",&n)!=1||n>MAX_SIZE)return 1;printf("Enter %zu elements: ",n);for(size_t i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(n)q(a,0,(int)n-1);printf("Sorted array: ");for(size_t i=0;i<n;i++)printf("%d%s",a[i],i+1==n?"\n":" ");return 0;}
/*
 * Sample run:
 * Enter number of elements: 7
 * Enter 7 elements: 6 4 7 8 1 9 5
 * Sorted array: 1 4 5 6 7 8 9
 */
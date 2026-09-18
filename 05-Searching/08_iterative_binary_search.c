/*
 * Program No.: 8
 * Program Name: Iterative binary search
 * Date: 10.08.26
 * Aim: Perform iterative binary search on a sorted array.
 * Approach: Repeatedly inspect the middle element and discard the half that
 * cannot contain the target.
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 08_iterative_binary_search.c -o program
 * Run: ./program
 */
#include <stdio.h>
#define MAX_SIZE 100
static int search(const int a[],size_t n,int t){size_t l=0,r=n;while(l<r){size_t m=l+(r-l)/2;if(a[m]==t)return(int)m;if(a[m]<t)l=m+1;else r=m;}return -1;}
int main(void){int a[MAX_SIZE],t;size_t n;printf("Enter number of elements: ");if(scanf("%zu",&n)!=1||n>MAX_SIZE)return 1;printf("Enter %zu sorted elements: ",n);for(size_t i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;printf("Enter element to search: ");if(scanf("%d",&t)!=1)return 1;int p=search(a,n,t);if(p>=0)printf("Element found at position: %d\n",p);else printf("Element not found\n");return 0;}
/*
 * Sample run:
 * Enter number of elements: 5
 * Enter 5 sorted elements: 12 24 36 48 60
 * Enter element to search: 48
 * Element found at position: 3
 */
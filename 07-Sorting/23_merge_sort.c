/*
 * Program No.: 23
 * Program Name: Merge sort
 * Date: 07.09.26
 * Aim: Sort an array using merge sort.
 * Approach: Divide the array recursively and merge the sorted halves into
 * one ordered range.
 * Time Complexity: O(n log n)
 * Space Complexity: O(n)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 23_merge_sort.c -o program
 * Run: ./program
 */
#include <stdio.h>
#include <stdlib.h>
static void merge(int a[],int l,int m,int r){int n1=m-l+1,n2=r-m,*x=malloc((size_t)n1*sizeof*x),*y=malloc((size_t)n2*sizeof*y);if(!x||!y){free(x);free(y);exit(EXIT_FAILURE);}for(int i=0;i<n1;i++)x[i]=a[l+i];for(int j=0;j<n2;j++)y[j]=a[m+1+j];int i=0,j=0,k=l;while(i<n1&&j<n2)a[k++]=x[i]<=y[j]?x[i++]:y[j++];while(i<n1)a[k++]=x[i++];while(j<n2)a[k++]=y[j++];free(x);free(y);}
static void ms(int a[],int l,int r){if(l>=r)return;int m=l+(r-l)/2;ms(a,l,m);ms(a,m+1,r);merge(a,l,m,r);}
int main(void){int a[100];size_t n;printf("Enter number of elements: ");if(scanf("%zu",&n)!=1||n>100)return 1;printf("Enter %zu elements: ",n);for(size_t i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(n)ms(a,0,(int)n-1);printf("Array after merge sort: ");for(size_t i=0;i<n;i++)printf("%d%s",a[i],i+1==n?"\n":" ");return 0;}
/*
 * Sample run:
 * Enter number of elements: 7
 * Enter 7 elements: 38 27 43 3 9 82 10
 * Array after merge sort: 3 9 10 27 38 43 82
 */
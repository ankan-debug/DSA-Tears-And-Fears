/*
 * Program No.: 27
 * Program Name: Queue
 * Date: Not specified in source
 * Aim: Implement a queue using an array with enqueue, dequeue, and display operations.
 * Approach: Maintain front and rear indices. Enqueue inserts at the rear,
 * dequeue removes from the front, and display prints all active elements.
 * Time Complexity: O(1) for enqueue and dequeue; O(n) for display
 * Space Complexity: O(n)
 * Author: ankan-debug
 * Compile: gcc -std=c11 -Wall -Wextra -pedantic 09-Queue/27_queue.c -o program
 * Run: ./program
 */

#include <stdio.h>

#define SIZE 5

int item[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1) {
        printf("Full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        item[rear] = value;
        printf("Inserted = %d\n", value);
    }
}

void deque(void)
{
    if (front == -1) {
        printf("Empty\n");
    } else {
        printf("Deleted = %d\n", item[front]);
        front++;

        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display(void)
{
    if (rear == -1) {
        printf("Empty\n");
    } else {
        printf("The Que = ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", item[i]);
        }
        printf("\n");
    }
}

int main(void)
{
    deque();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(60);
    display();

    deque();
    display();

    return 0;
}

/*
 * Sample output:
 * Empty
 * Inserted = 10
 * Inserted = 20
 * Inserted = 30
 * Inserted = 60
 * The Que = 10 20 30 60
 * Deleted = 10
 * The Que = 20 30 60
 */
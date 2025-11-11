#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Initialize the queue
void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is empty
bool isEmpty(Queue *q) {
    return (q->front == -1);
}

// Check if the queue is full
bool isFull(Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}

// Enqueue: add an element to the back
void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full! Cannot enqueue %d\n", value);
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;  // first element
    }
    q->rear++;
    q->data[q->rear] = value;
    printf("Enqueued %d\n", value);
}

// Dequeue: remove an element from the front
int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue\n");
        return -1;  // sentinel
    }
    int value = q->data[q->front];
    if (q->front == q->rear) {
        // queue becomes empty
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    printf("Dequeued %d\n", value);
    return value;
}

// Peek: view the


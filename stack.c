#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

// Initialize the stack: set top to -1 meaning “empty”
void initialize(Stack *s) {
    s->top = -1;
}

// Check if stack is empty
bool isEmpty(Stack *s) {
    return (s->top == -1);
}

// Check if stack is full (cannot push more)
bool isFull(Stack *s) {
    return (s->top == MAX_SIZE - 1);
}

// Push an element onto the stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    s->arr[++(s->top)] = value;
    printf("Pushed %d onto stack\n", value);
}

// Pop an element from the stack; returns popped value (or some error code)
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;  // or some sentinel/error value
    }
    int value = s->arr[(s->top)--];
    printf("Popped %d from stack\n", value);
    return value;
}

// Peek (view) the top element without removing
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty, nothing to peek\n");
        return -1;  // error/sentinel
    }
    return s->arr[s->top];
}

int main(void) {
    Stack s;
    initialize(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element is %d\n", peek(&s));

    pop(&s);
    pop(&s);

    if (!isEmpty(&s)) {
        printf("Top element after pops is %d\n", peek(&s));
    }

    // pop until empty
    pop(&s);
    pop(&s);  // extra pop to show underflow

    return 0;
}


#ifndef STACK_H
#define STACK_H

typedef struct {
	int top;
	int size;
	int *stack;
}STACK;

void push(STACK *stack, const int data);
int pop(STACK *stack);
int isEmpty(STACK *stack);
int isFull(STACK *stack);
void Display(STACK *stack);
void init(STACK *stack, int size);
void deinit(STACK *stack);

#endif
